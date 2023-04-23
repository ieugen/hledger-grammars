module.exports = grammar({
    name: 'hledger_timeclock',
    rules: {
        source_file: $ => repeat($._definition),
        _definition: $ => choice(
            $.comment,
            seq($.clock_in,
                repeat($.comment),
                $.clock_out)
        ),
        comment: $ => {
            // Lines in the journal will be ignored if they begin with a hash (#) or a semicolon (;). (See also Other syntax.) hledger will also ignore regions beginning with a comment line and ending with an end comment line (or file end). Here's a suggestion for choosing between them:

            // # for top-level notes
            // ; for commenting out things temporarily
            // comment for quickly commenting large regions (remember it's there, or you might get confused)

            return token(repeat1(
                    choice(
                        seq('#', /.*/),
                        seq(';', /.*/),
                        seq('*', /.*/))
                        ))
        },
        clock_in: $ => {
            return seq('i', $.simple_date,
            $.time,$.account_name,optional(seq('  ',$.tx_description)));
        },
        clock_out: $ => seq('o', $.simple_date, $.time),
        simple_date: $ => {
            // Simple date format
            // YYYY-MM-DD or YYYY/MM/DD or YYYY.MM.DD, with leading zeros optional.
            // The year may be omitted, in which case it will be inferred from the context:
            // - the current transaction,
            // - the default year set with a Y directive
            // - or the current date when the command is run.

            const decimal_digits = /\d(_?\d)*/
            const year = seq(/[1-9]/,decimal_digits, decimal_digits, decimal_digits);
            const month = seq(optional(/[0-1]/),decimal_digits);
            const day = seq(optional(/[0-3]/),decimal_digits)

            const iso_date = seq(optional(seq(year,'-')),month,'-',day)
            const slash_date = seq(optional(seq(year,'/')),month,'/',day)
            const dot_date = seq(optional(seq(year,'.')),month,'.',day)

            return token(
                choice(
                    iso_date,
                    slash_date,
                    dot_date))
        },
        time: $ => {
            // The time format is HH:MM[:SS][+-ZZZZ].
            // Seconds and timezone are optional.
            // The timezone, if present, must be four digits and is ignored
            // (currently the time is always interpreted as a local time).

            const decimal_digits = /\d(_?\d)*/
            const hh = seq(/[0-2]/,decimal_digits);
            const mm = seq(/[0-5]/,decimal_digits);
            const ss = seq(/[0-5]/,decimal_digits);
            const tz = seq(optional(choice('+','-')),
                decimal_digits, decimal_digits, decimal_digits,decimal_digits)

            return token(
                seq(hh,':',mm,
                optional(seq(':',ss)),
                optional(tz)))
        },
        account_name: $ => {
            // https://hledger.org/1.29/hledger.html#account-names

            // Account names may be capitalised or not;
            // they may contain letters, numbers, symbols, or single spaces.
            // Note, when an account name and an amount are written on the same line,
            // they must be separated by two or more spaces (or tabs).

            // Parentheses or brackets enclosing the full account name indicate virtual postings, described below.
            // Parentheses or brackets internal to the account name have no special meaning.
            const alphanumeric = /[a-zA-Z0-9]+/
            const account_word = seq(repeat1(alphanumeric))
            // account part can be of format: <name><single space><name>
            const account_part = seq(account_word, optional(seq(' ', repeat1(account_word))))
            const account_separator = choice(':','.')
            const account = seq(account_part, repeat(seq(account_separator, account_part)))
            const virtual_account = choice(
                seq('[',account,']'),
                seq('(',account,')'))
            return token(choice(account, virtual_account))
        },
        tx_description: $ => {
            return token(/.*/);
        }
    }
});