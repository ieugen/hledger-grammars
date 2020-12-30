parser grammar TimeclockParser;

options { tokenVocab=TimeclockLexer; }

journal: (transaction | COMMENT_LINE)*;

/** A timeclock transaction is a clock-in and clock-out pair */
transaction: clock_in clock_out;

clock_in    : CLOCK_IN_START date time acount (description)*;
clock_out   : CLOCK_OUT_START date time;

year: Int4;
month: Int2;
day: Int2;
hour: Int2;
minute: Int2;
second: Int2;

date: year DATE_SEPARATOR month DATE_SEPARATOR day;
time: hour TIME_SEPARATOR minute (TIME_SEPARATOR second)+;

acount: accountPart (TIME_SEPARATOR accountPart)*;
accountPart: WORD (SINGLE_WS WORD)*;
description: WORD(WORD | SINGLE_WS)*;