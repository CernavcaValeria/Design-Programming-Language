%{
#include <stdio.h>
#include "y.tab.h"
%}
%%
"#include <"[_a-zA-Z0-9]+".h>"\n {return BB;}
0|[1-9][0-9]* {yylval.intval=atoi(yytext); return INDEX;}
(0|[1-9][0-9]*)"."[0-9]+|-[1-9][0-9]*"."[0-9]+ {return NR_FLOAT;}
-[1-9][0-9]* {return NR_NEG;}
"$bool"|"$void"|"$int"|"$float"|"$char"|"$constint"|"$constchar"|"$constfloat" {yylval.strval=strdup(yytext);return TIP;}
"$string" {return STRING;}
"strlen" {return STRLEN;}
"strcat" {return STRCAT;}
"strcmp" {return STRCMP;}
"strrev" {return STRREV;}
"print" {return PRINT;}
"Eval" {return EVAL;}
\"[^\n]*\" {yylval.strval=strdup(yytext);return STR;}
"Function" {return FUNCT;}
"Endfunction" {return ENDFUNCT;}
"Class" {return CLASS;}
"Endclass" {return ENDCLASS;}
"return" {return RETURN;}
"~while" {return WHILE;}
"~whileend" {return ENDWHILE;}
"~if" {return IF;}
"~then" {return THEN;}
"~thenend" {return ENDTHEN;}
"~else" {return ELSE;}
"~elseend" {return ENDELSE;}
"~for" {return FOR;}
"~forend" {return ENDFOR;}
"IntMain" {return INTMAIN;}
"End" {return ENDMAIN;}
[_a-zA-Z][_a-zA-Z0-9]* {yylval.strval=strdup(yytext); return ID;}
":=" {return ASSIGN;}
">"|"<"|">="|"<="|"=="|"!="|"&&"|"||" {return OPLOG;}
[ \t] ;
\n|"//"[^\n]*\n {yylineno++;}
. {return yytext[0];}

