grammar timeclock;

tokens { CLOCK_IN_START, CLOCK_OUT_START }

fragment CLOCK_IN_START  : ('i'|'I');
fragment CLOCK_OUT_START : ('o'|'O');

fragment LOWERCASE      : [a-z];
fragment UPPERCASE      : [A-Z];
fragment Digit          : [0-9];

Int2: Digit Digit;
Int4: Digit Digit Digit Digit;

/**
    https://hledger.org/journal.html#simple-dates

    Dates in the journal file use simple dates format: YYYY-MM-DD or YYYY/MM/DD or YYYY.MM.DD,
    with leading zeros optional.
    The year may be omitted, in which case it will be inferred from the context:
    * the current transaction,
    * the default year set with a default year directive,
    * or the current date when the command is run.
    Some examples: 2010-01-31, 2010/01/31, 2010.1.31, 1/31.

    NOTE: We only support full dates. Missing year will trigger errror.
 */
// SIMPLE_DATE     : ;

WHITESPACE  : (' ' | 't' ) ;
NEWLINE     : ('r'? 'n' | 'r')+;

COMMENT_LINE: ';' ~('\r' | '\n')*;


journal: (transaction | COMMENT_LINE )*;

/** A timeclock transaction is a clockin and clock-out pair */
transaction: clock_in clock_out;

clock_in    : CLOCK_IN_START ' ' ;
clock_out   : CLOCK_OUT_START ' ' ;

year: Int4;
month: Int2;
day: Int2;
hour: Int2;
minute: Int2;
second: Int2;

dateBasic: year '-' month '-' day;
