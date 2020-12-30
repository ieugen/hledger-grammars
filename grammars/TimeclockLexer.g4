lexer grammar TimeclockLexer;

channels { WS_CHANNEL, COMMENT_CHANNEL }

fragment LOWERCASE      : [a-z];
fragment UPPERCASE      : [A-Z];
fragment Digit          : [0-9];

Int2: Digit Digit;
Int4: Digit Digit Digit Digit;

WS: [ \t]+ -> channel(WS_CHANNEL);
NL: ('\r\n' | '\r' | '\n') -> channel(WS_CHANNEL);

SINGLE_WS: ' ';
DATE_SEPARATOR: ('-' | '/' | '.');
TIME_SEPARATOR: ':';

COMMENT_LINE: ';' ~('\r' | '\n')* -> channel(COMMENT_CHANNEL);

CLOCK_IN_START  : ('i'|'I');
CLOCK_OUT_START : ('o'|'O');
WORD: (UPPERCASE | LOWERCASE | Digit | '_')+;

UNRECOGNIZED: . ;