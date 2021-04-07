/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ASSIGN = 258,
    OPLOG = 259,
    NR = 260,
    BB = 261,
    FUNCT = 262,
    ENDFUNCT = 263,
    WHILE = 264,
    ENDWHILE = 265,
    IF = 266,
    ENDIF = 267,
    FOR = 268,
    ENDFOR = 269,
    THEN = 270,
    ENDTHEN = 271,
    ELSE = 272,
    ENDELSE = 273,
    RETURN = 274,
    CLASS = 275,
    ENDCLASS = 276,
    STRING = 277,
    STRLEN = 278,
    STRCMP = 279,
    STRREV = 280,
    STRCAT = 281,
    PRINT = 282,
    INTMAIN = 283,
    ENDMAIN = 284,
    EVAL = 285,
    INDEX = 286,
    NR_NEG = 287,
    NR_FLOAT = 288,
    TIP = 289,
    ID = 290,
    STR = 291
  };
#endif
/* Tokens.  */
#define ASSIGN 258
#define OPLOG 259
#define NR 260
#define BB 261
#define FUNCT 262
#define ENDFUNCT 263
#define WHILE 264
#define ENDWHILE 265
#define IF 266
#define ENDIF 267
#define FOR 268
#define ENDFOR 269
#define THEN 270
#define ENDTHEN 271
#define ELSE 272
#define ENDELSE 273
#define RETURN 274
#define CLASS 275
#define ENDCLASS 276
#define STRING 277
#define STRLEN 278
#define STRCMP 279
#define STRREV 280
#define STRCAT 281
#define PRINT 282
#define INTMAIN 283
#define ENDMAIN 284
#define EVAL 285
#define INDEX 286
#define NR_NEG 287
#define NR_FLOAT 288
#define TIP 289
#define ID 290
#define STR 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 19 "pr.y" /* yacc.c:1909  */

	int intval;
	char* strval;

#line 131 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
