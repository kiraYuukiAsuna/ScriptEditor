grammar KeywordGrammar;

// lexer token

WS: [ \t\u000C\r]+ -> channel(HIDDEN);
NEWLINE: [\n] -> channel(HIDDEN);

Digit: [0-9];
NAME: [a-zA-Z_][a-zA-Z_0-9]*;

INT: Digit+;
FLOAT: Digit+ '.' Digit*;

// parser
start_: chunk EOF;

chunk: block;

block: stat*;

stat:
    NEWLINE
	| ';'
	| objectdef
	| objmethoddef
	| methoddef
	| valdef
	| valassignment
	| methodcall
	| objmethodcall;

string: '"' NAME '"';
identifier: NAME;
objectIdentifier: identifier;
methodIdentifier: identifier;
valIdentifier: identifier;
typeIdentifier: identifier;
paramenter: identifier | string | INT | FLOAT;
paramenterlist: paramenter* (',' paramenter)*;
paramenterDef : typeIdentifier paramenter;
paramenterDeflist: paramenterDef* (',' paramenterDef)*;

objectdef: 'object' objectIdentifier ';';
objmethoddef:
	'method' '(' objectIdentifier ')' methodIdentifier '(' paramenterDeflist ')' '{' block '}';
methoddef:
	'method' methodIdentifier '(' paramenterDeflist ')' '{' block '}';
valdef: 'val' typeIdentifier valIdentifier ';';
valassignment:
	valIdentifier '=' valIdentifier ';'
	| valIdentifier '=' string ';'
	| valIdentifier '=' string ';'
	| valIdentifier '=' INT ';'
	| valIdentifier '=' FLOAT ';';
methodcall: methodIdentifier '(' paramenterlist ')' ';';
objmethodcall:
	objectIdentifier '.' methodIdentifier '(' paramenterlist ')' ';';