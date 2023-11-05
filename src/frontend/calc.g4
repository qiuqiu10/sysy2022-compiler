grammar calc;
LPAREN: '(';
RPAREN: ')';
ADD: '+';
SUB: '-';
MUL: '*';
DIV: '/';
NUMBER: [0-9]+ | [0-9]+ '.' [0-9]* | [0-9]* '.' [0-9]+;
RET: '\r\n' | '\n' | '\r';
WHITE_SPACE: [ \t] -> skip; // -> skip 表示解析时跳过该规则
calculator: line*;
line: expr RET;
expr: expr MUL expr | expr DIV expr | expr ADD expr | expr SUB expr | NUMBER | LPAREN expr RPAREN;