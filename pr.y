%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "print_functie.h"
#include "print_variabila.h"
#include "print_clasa.h"
#include "check.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;

int number_erori=0;


%}

%union{
	int intval;
	char* strval;
}

%token ASSIGN OPLOG NR BB FUNCT ENDFUNCT WHILE ENDWHILE IF ENDIF FOR ENDFOR THEN ENDTHEN ELSE ENDELSE RETURN CLASS ENDCLASS STRING STRLEN STRCMP STRREV STRCAT PRINT INTMAIN ENDMAIN EVAL

%token <intval> INDEX NR_NEG NR_FLOAT
%type <intval> e regex number


%token <strval> TIP ID STR 
%type <strval> lista_param  parametri parametru 
%type <strval> ',' '(' ')'


%start progr
%left '-'
%left '+'  
%left '*' 
%left '/' 
%left '%'
%%

progr: biblioteci declaratii  mainul {  if(number_erori==0)
                                    		 { printf("Program Corect Sintactic\n"); }
                                        else
                                   		 { printf("Program Gresit Semantic\n");
                                                   printf("Numarul de erori: [%d]\n", number_erori); }  
                                      };



biblioteci: biblioteci BB
          | 
          ;




mainul : INTMAIN instructiuni ENDMAIN;



declaratii: declaratii declaratie 
	  |
          ;



declaratie: variabila
    | matrice
    | cub
    | vector
    | functie
    | clasa
    ;





variabila:               TIP ID ';'  
                         {char s1[256]; char s2[256]; strcpy(s1, $2); strcpy(s2, "rol_global"); if(Control_declar_var_global(s1, s2) == 1){printf("\n[EROARE] variabila %s este declarata de mai multe ori [line: %d]\n", $2, yylineno+2); number_erori++;}
strcpy(v[number_total_of_var].tip,$1); strcpy(v[number_total_of_var].nm,$2); strcpy(v[number_total_of_var].rol,"rol_global"); v[number_total_of_var].size = 0; strcpy(v[number_total_of_var].value, "\0"); insert_in_table_variabila(number_total_of_var); number_total_of_var++;}


			| TIP ID ASSIGN regex ';' 
                        {char s1[256]; char s2[256]; strcpy(s1, $2); strcpy(s2, "rol_global"); if(Control_declar_var_global(s1, s2) == 1) {printf("\n[EROARE] variabila %s este declarata de mai multe ori [line: %d]\n", $2, yylineno+2); number_erori++;} strcpy(v[number_total_of_var].tip,$1); strcpy(v[number_total_of_var].nm,$2); strcpy(v[number_total_of_var].rol,"rol_global"); v[number_total_of_var].size = 0; char valoare[256]; sprintf(valoare, "%d", $4); strcpy(v[number_total_of_var].value, valoare);  insert_in_table_variabila(number_total_of_var); number_total_of_var++;}

			| STRING ID';'  
 			{char s1[256]; char s2[256]; strcpy(s1, $2); strcpy(s2, "rol_global"); if(Control_declar_var_global(s1, s2) == 1) {printf("\n[EROARE] variabila %s este declarata de mai multe ori [line: %d]\n", $2, yylineno+2); number_erori++;} 							  strcpy(v[number_total_of_var].tip,"$string"); strcpy(v[number_total_of_var].nm,$2); strcpy(v[number_total_of_var].rol,"rol_global"); v[number_total_of_var].size = 0; strcpy(v[number_total_of_var].value, "\0"); insert_in_table_variabila(number_total_of_var); number_total_of_var++;}	

			| STRING ID ASSIGN STR ';' 
			{char s1[256]; char s2[256]; strcpy(s1, $2); strcpy(s2, "rol_global"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] variabila %s este declarata de mai multe ori [line: %d]\n", $2, yylineno+2);  number_erori++;}						  strcpy(v[number_total_of_var].tip,"$string"); strcpy(v[number_total_of_var].nm,$2); strcpy(v[number_total_of_var].rol,"rol_global"); v[number_total_of_var].size = 0; insert_in_table_variabila(number_total_of_var); number_total_of_var++;}

			;





vector: 	TIP '['INDEX']' ID ';'	
		 	{char s1[256]; char s2[256]; strcpy(s1, $5); strcpy(s2, "rol_global"); if(Control_declar_var_global(s1, s2) == 1){printf("\n[EROARE] arrayul %s este declarat de mai multe ori [line: %d]\n", $5, yylineno+2); number_erori++;}
strcpy(v[number_total_of_var].tip,$1); strcpy(v[number_total_of_var].nm,$5); strcpy(v[number_total_of_var].rol,"rol_global"); v[number_total_of_var].size = 1; insert_in_table_variabila(number_total_of_var); number_total_of_var++;} 
       
 	       |TIP '['INDEX']' ID ASSIGN  regex ';'	
		 	{char s1[256]; char s2[256]; strcpy(s1, $5); strcpy(s2, "rol_global"); if(Control_declar_var_global(s1, s2) == 1){printf("\n[EROARE] arrayul %s este declarat de mai multe ori [line: %d]\n", $5, yylineno+2); number_erori++;}
strcpy(v[number_total_of_var].tip,$1); strcpy(v[number_total_of_var].nm,$5); strcpy(v[number_total_of_var].rol,"rol_global"); v[number_total_of_var].size = 1; char valoare[256];sprintf(valoare, "%d", $7); strcpy(v[number_total_of_var].value, valoare); insert_in_table_variabila(number_total_of_var); number_total_of_var++;};


 



matrice:         TIP '['INDEX']''['INDEX']' ID ';'	    							
                        {char s1[256]; char s2[256]; strcpy(s1, $8); strcpy(s2, "rol_global"); if(Control_declar_var_global(s1, s2) == 1){printf("\n[EROARE] matricea %s este declarata de mai multe ori [line: %d]\n", $8, yylineno+2); number_erori++;}
strcpy(v[number_total_of_var].tip,$1); strcpy(v[number_total_of_var].nm,$8); strcpy(v[number_total_of_var].rol,"rol_global"); v[number_total_of_var].size = 2; insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
                
		|TIP '['INDEX']''['INDEX']' ID ASSIGN'{'regex ',' regex '}' ';'	    							
                        {char s1[256]; char s2[256]; strcpy(s1, $8); strcpy(s2, "rol_global"); if(Control_declar_var_global(s1, s2) == 1){printf("\n[EROARE] matricea %s este declarata de mai multe ori [line: %d]\n", $8, yylineno+2); number_erori++;}
strcpy(v[number_total_of_var].tip,$1); strcpy(v[number_total_of_var].nm,$8); strcpy(v[number_total_of_var].rol,"rol_global"); v[number_total_of_var].size = 2; char valoare[256];char valoare1[256];sprintf(valoare, "%d", $11);sprintf(valoare1, "%d", $13); strcpy(v[number_total_of_var].value, valoare); strcpy(v[number_total_of_var].value1, valoare1); insert_in_table_variabila(number_total_of_var); number_total_of_var++;};






cub: 		TIP '['INDEX']''['INDEX']''['INDEX']' ID ';'   
 			{char s1[256]; char s2[256]; strcpy(s1, $11); strcpy(s2, "rol_global"); if(Control_declar_var_global(s1, s2) == 1){printf("\n[EROARE] cubul %s este declarat de mai multe ori [line: %d]\n", $11, yylineno+2); number_erori++;}
strcpy(v[number_total_of_var].tip,$1); strcpy(v[number_total_of_var].nm,$11); strcpy(v[number_total_of_var].rol,"rol_global"); v[number_total_of_var].size = 3; insert_in_table_variabila(number_total_of_var); number_total_of_var++;}

               |TIP '['INDEX']''['INDEX']''['INDEX']' ID ASSIGN '{'regex ',' regex ','regex'}' ';'  
 			{char s1[256]; char s2[256]; strcpy(s1, $11); strcpy(s2, "rol_global"); if(Control_declar_var_global(s1, s2) == 1){printf("\n[EROARE] cubul %s este declarat de mai multe ori [line: %d]\n", $11, yylineno+2); number_erori++;}
strcpy(v[number_total_of_var].tip,$1); strcpy(v[number_total_of_var].nm,$11); strcpy(v[number_total_of_var].rol,"rol_global"); v[number_total_of_var].size = 3;char valoare[256];char valoare1[256]; char valoare2[256];sprintf(valoare, "%d", $14);sprintf(valoare1, "%d", $16);sprintf(valoare2, "%d", $18); strcpy(v[number_total_of_var].value, valoare); strcpy(v[number_total_of_var].value1, valoare1);strcpy(v[number_total_of_var].value2, valoare2); insert_in_table_variabila(number_total_of_var); number_total_of_var++;};





functie:	FUNCT TIP ID '(' lista_param ')' in_functie ENDFUNCT ';'
 		 	{char s[256]; strcpy(s, $3); if(control_err_funct(s)==1){ printf("\n[EROARE] functia %s este declarata de mai multe ori [line: %d]\n", s, yylineno+2); number_erori++;}  strcat(f[number_total_of_funct].tip, $2); strcat(f[number_total_of_funct].nm, $3); strcpy(f[number_total_of_funct].rol, "globala"); insert_in_table_functie(number_total_of_funct); number_total_of_funct++;};




//CLASA

clasa: 		CLASS ID in_clasa ENDCLASS ';'  class_objects
 			{strcpy(c[number_total_of_class].nm, $2); insert_in_table_clasa(number_total_of_class); number_total_of_class++;};



class_objects : class_objects ID ID ';'								
	      | 
	      ;

in_clasa:        variabila_from_cl in_clasa
		| matrice_from_cl in_clasa  
                | cub_from_cl in_clasa
		| vector_from_cl in_clasa
		| statement ';' in_clasa
		| fruntie_in_clasa
		;

fruntie_in_clasa: fruntie_in_clasa functie2
		|
		;


functie2: 		FUNCT TIP ID '(' lista_param ')' in_functie ENDFUNCT ';' 
                 		{char s[256]; strcpy(s, $3); if(control_err_funct(s)==1){ printf("\nroare functia %s este declarata de mai multe ori [line: %d]\n", s, yylineno+2); number_erori++;} strcat(f[number_total_of_funct].tip, $2); strcat(f[number_total_of_funct].nm, $3); strcpy(f[number_total_of_funct].rol, "metoda"); insert_in_table_functie(number_total_of_funct); number_total_of_funct++;};



in_functie: decla_for_funct in_functie
       |  statement ';' in_functie
       | return
       ;

return: RETURN regex ';'
	| 
	;

decla_for_funct: vector_from_funct 
             | matrice_from_funct
             | cub_from_funct
             | variabila_from_funct
             ;



variabila_from_funct: 		        TIP ID ';' 
         			{char s1[256]; char s2[256]; strcpy(s1, $2); strcpy(s2, "functie"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] variabila %s este declarata de mai multe ori in functie [line: %d]\n", $2,yylineno+2);number_erori++;}  strcpy(v[number_total_of_var].tip,$1); strcpy(v[number_total_of_var].nm,$2); strcpy(v[number_total_of_var].rol,"functie"); v[number_total_of_var].size = 0; strcpy(v[number_total_of_var].value, "\0"); insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
	

				| TIP ID ASSIGN regex ';' 
      				{char s1[256]; char s2[256]; strcpy(s1, $2); strcpy(s2, "functie"); if(Control_declar_var_global(s1, s2) == 1) {printf("\n[EROARE] variabila %s este declarata de mai multe ori in functie [line: %d]\n", $2,yylineno+2); number_erori++;}  strcpy(v[number_total_of_var].tip,$1); strcpy(v[number_total_of_var].nm,$2); strcpy(v[number_total_of_var].rol,"functie"); v[number_total_of_var].size = 0; char valoare[256]; sprintf(valoare, "%d", $4); strcpy(v[number_total_of_var].value, valoare); insert_in_table_variabila(number_total_of_var); number_total_of_var++;}

				| STRING ID';'   
   				{char s1[256]; char s2[256]; strcpy(s1, $2); strcpy(s2, "functie"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] variabila %s este declarata de mai multe ori in functie [line: %d]\n", $2,yylineno+2);number_erori++;} 					strcpy(v[number_total_of_var].tip,"$string"); strcpy(v[number_total_of_var].nm,$2); strcpy(v[number_total_of_var].rol,"functie"); v[number_total_of_var].size = 0; strcpy(v[number_total_of_var].value, "\0"); insert_in_table_variabila(number_total_of_var); number_total_of_var++;}	


				| STRING ID ASSIGN STR ';'
			 	{char s1[256]; char s2[256]; strcpy(s1, $2); strcpy(s2, "functie"); if(Control_declar_var_global(s1, s2) == 1) {printf("\n[EROARE] variabila %s este declarata de mai multe ori in functie [line: %d]\n", $2,yylineno+2); number_erori++;}						strcpy(v[number_total_of_var].tip,"$string"); strcpy(v[number_total_of_var].nm,$2); strcpy(v[number_total_of_var].rol,"functie"); v[number_total_of_var].size = 0; insert_in_table_variabila(number_total_of_var); number_total_of_var++;} ;







vector_from_funct: 		TIP '['INDEX']' ID ';'	
				{char s1[256]; char s2[256]; strcpy(s1, $5); strcpy(s2, "functie"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] arrayul %s este declarat de mai multe ori in functie [line: %d]\n", $5,yylineno+2);number_erori++;} 
strcpy(v[number_total_of_var].tip,$1); strcpy(v[number_total_of_var].nm,$5); strcpy(v[number_total_of_var].rol,"functie"); v[number_total_of_var].size = 1; insert_in_table_variabila(number_total_of_var); number_total_of_var++;}

                        	|TIP '['INDEX']' ID ASSIGN regex ';'	
				{char s1[256]; char s2[256]; strcpy(s1, $5); strcpy(s2, "functie"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] arrayul %s este declarat de mai multe ori in functie [line: %d]\n", $5,yylineno+2);number_erori++;} 
strcpy(v[number_total_of_var].tip,$1); strcpy(v[number_total_of_var].nm,$5); strcpy(v[number_total_of_var].rol,"functie"); v[number_total_of_var].size = 1; char valoare[256];sprintf(valoare, "%d", $7); strcpy(v[number_total_of_var].value, valoare); insert_in_table_variabila(number_total_of_var); number_total_of_var++;};






matrice_from_funct: 		TIP '['INDEX']''['INDEX']' ID ';'
			      	{char s1[256]; char s2[256]; strcpy(s1, $8); strcpy(s2, "functie"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] matricea %s este declarata de mai multe ori in functie [line: %d]\n", $8,yylineno+2);number_erori++;} 
strcpy(v[number_total_of_var].tip,$1); strcpy(v[number_total_of_var].nm,$8); strcpy(v[number_total_of_var].rol,"functie"); v[number_total_of_var].size = 2; insert_in_table_variabila(number_total_of_var); number_total_of_var++;} 

			       |TIP '['INDEX']''['INDEX']' ID ASSIGN '{'regex ','regex'}' ';'
			      	{char s1[256]; char s2[256]; strcpy(s1, $8); strcpy(s2, "functie"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] matricea %s este declarata de mai multe ori in functie [line: %d]\n", $8,yylineno+2);number_erori++;} 
strcpy(v[number_total_of_var].tip,$1); strcpy(v[number_total_of_var].nm,$8); strcpy(v[number_total_of_var].rol,"functie"); v[number_total_of_var].size = 2; char valoare[256];char valoare1[256];sprintf(valoare, "%d", $11);sprintf(valoare1, "%d", $13); strcpy(v[number_total_of_var].value, valoare); strcpy(v[number_total_of_var].value1, valoare1); insert_in_table_variabila(number_total_of_var); number_total_of_var++;};




cub_from_funct: 		TIP '['INDEX']''['INDEX']''['INDEX']' ID ';'
				{char s1[256]; char s2[256]; strcpy(s1, $11); strcpy(s2, "functie"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] cubul %s este declarat de mai multe ori in functie [line: %d]\n", $11,yylineno+2);number_erori++;}  strcpy(v[number_total_of_var].tip,$1); strcpy(v[number_total_of_var].nm,$11); strcpy(v[number_total_of_var].rol,"functie"); v[number_total_of_var].size = 3; insert_in_table_variabila(number_total_of_var); number_total_of_var++;} 

			       |TIP '['INDEX']''['INDEX']''['INDEX']' ID  ASSIGN '{'regex ','regex ',' regex'}'';'
				{char s1[256]; char s2[256]; strcpy(s1, $11); strcpy(s2, "functie"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] cubul %s este declarat de mai multe ori in functie [line: %d]\n", $11,yylineno+2);number_erori++;}  strcpy(v[number_total_of_var].tip,$1); strcpy(v[number_total_of_var].nm,$11); strcpy(v[number_total_of_var].rol,"functie"); v[number_total_of_var].size = 3; char valoare[256];char valoare1[256]; char valoare2[256];sprintf(valoare, "%d", $14);sprintf(valoare1, "%d", $16);sprintf(valoare2, "%d", $18); strcpy(v[number_total_of_var].value, valoare); strcpy(v[number_total_of_var].value1, valoare1);strcpy(v[number_total_of_var].value2, valoare2); insert_in_table_variabila(number_total_of_var); number_total_of_var++;};







variabila_from_cl: 		 TIP ID ';' 
				{char s1[256]; char s2[256]; strcpy(s1, $2); strcpy(s2, "clasa"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] variabila %s este declarata de mai multe ori in clasa [line: %d]\n", $2, yylineno+2);number_erori++;} 										 strcpy(v[number_total_of_var].tip,$1); strcpy(v[number_total_of_var].nm,$2); strcpy(v[number_total_of_var].rol,"clasa"); v[number_total_of_var].size = 0; strcpy(v[number_total_of_var].value, "\0"); insert_in_table_variabila(number_total_of_var); number_total_of_var++;}


				| TIP ID ASSIGN regex ';' 
				{char s1[256]; char s2[256]; strcpy(s1, $2); strcpy(s2, "clasa"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] variabila %s este declarata de mai multe ori [line: %d]\n", $2, yylineno+2);number_erori++;} 	
strcpy(v[number_total_of_var].tip,$1); strcpy(v[number_total_of_var].nm,$2); strcpy(v[number_total_of_var].rol,"clasa"); v[number_total_of_var].size = 0; char valoare[256]; sprintf(valoare, "%d", $4); strcpy(v[number_total_of_var].value, valoare); insert_in_table_variabila(number_total_of_var); number_total_of_var++;}


				| STRING ID';'   
				{char s1[256]; char s2[256]; strcpy(s1, $2); strcpy(s2, "clasa"); if(Control_declar_var_global(s1, s2) == 1) {printf("\n[EROARE] variabila %s este declarata de mai multe ori [line: %d]\n", $2, yylineno+2);number_erori++;} 						 strcpy(v[number_total_of_var].tip,"$string"); strcpy(v[number_total_of_var].nm,$2); strcpy(v[number_total_of_var].rol,"clasa"); v[number_total_of_var].size = 0; strcpy(v[number_total_of_var].value, "\0"); insert_in_table_variabila(number_total_of_var); number_total_of_var++;}	

				| STRING ID ASSIGN STR ';'  
				{char s1[256]; char s2[256]; strcpy(s1, $2); strcpy(s2, "clasa"); if(Control_declar_var_global(s1, s2) == 1) {printf("\n[EROARE] variabila %s este declarata de mai multe ori [line: %d]\n", $2, yylineno+2); number_erori++;}					 strcpy(v[number_total_of_var].tip,"$string"); strcpy(v[number_total_of_var].nm,$2); strcpy(v[number_total_of_var].rol,"clasa"); v[number_total_of_var].size = 0; insert_in_table_variabila(number_total_of_var); number_total_of_var++;} ;






vector_from_cl:		 TIP '['INDEX']' ID ASSIGN regex ';'
				 {char s1[256]; char s2[256]; strcpy(s1, $5); strcpy(s2, "clasa"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] array %s este declarat de mai multe ori in clasa [line: %d]\n", $5, yylineno+2);number_erori++;}
strcpy(v[number_total_of_var].tip,$1); strcpy(v[number_total_of_var].nm,$5); strcpy(v[number_total_of_var].rol,"clasa"); v[number_total_of_var].size = 1; char valoare[256];sprintf(valoare, "%d", $7); strcpy(v[number_total_of_var].value, valoare); insert_in_table_variabila(number_total_of_var); number_total_of_var++;}

 			|TIP '['INDEX']' ID ';'
				 {char s1[256]; char s2[256]; strcpy(s1, $5); strcpy(s2, "clasa"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] array %s este declarat de mai multe ori in clasa [line: %d]\n", $5, yylineno+2);number_erori++;}
strcpy(v[number_total_of_var].tip,$1); strcpy(v[number_total_of_var].nm,$5); strcpy(v[number_total_of_var].rol,"clasa"); v[number_total_of_var].size = 1; insert_in_table_variabila(number_total_of_var); number_total_of_var++;};





matrice_from_cl:		 TIP '['INDEX']''['INDEX']' ID ASSIGN'{'regex ',' regex '}' ';'
			      	{char s1[256]; char s2[256]; strcpy(s1, $8); strcpy(s2, "clasa"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] matricea %s este declarata de mai multe ori in clasa [line: %d]\n", $8, yylineno+2);number_erori++;}
strcpy(v[number_total_of_var].tip,$1); strcpy(v[number_total_of_var].nm,$8); strcpy(v[number_total_of_var].rol,"clasa"); v[number_total_of_var].size = 2; char valoare[256];char valoare1[256];sprintf(valoare, "%d", $11);sprintf(valoare1, "%d", $13); strcpy(v[number_total_of_var].value, valoare); strcpy(v[number_total_of_var].value1, valoare1); insert_in_table_variabila(number_total_of_var); number_total_of_var++;}

				| TIP '['INDEX']''['INDEX']' ID ';'
			      	{char s1[256]; char s2[256]; strcpy(s1, $8); strcpy(s2, "clasa"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] matricea %s este declarata de mai multe ori in clasa [line: %d]\n", $8, yylineno+2);number_erori++;}
strcpy(v[number_total_of_var].tip,$1); strcpy(v[number_total_of_var].nm,$8); strcpy(v[number_total_of_var].rol,"clasa"); v[number_total_of_var].size = 2; insert_in_table_variabila(number_total_of_var); number_total_of_var++;};




cub_from_cl:			TIP '['INDEX']''['INDEX']''['INDEX']' ID ASSIGN '{'regex ',' regex ','regex'}' ';'
 			  	{char s1[256]; char s2[256]; strcpy(s1, $11); strcpy(s2, "clasa"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] cubul %s este declarat de mai multe ori in clasa [line: %d]\n", $11, yylineno+2);number_erori++;}
strcpy(v[number_total_of_var].tip,$1); strcpy(v[number_total_of_var].nm,$11); strcpy(v[number_total_of_var].rol,"clasa"); v[number_total_of_var].size = 3;  char valoare[256];char valoare1[256]; char valoare2[256];sprintf(valoare, "%d", $14);sprintf(valoare1, "%d", $16);sprintf(valoare2, "%d", $18); strcpy(v[number_total_of_var].value, valoare); strcpy(v[number_total_of_var].value1, valoare1);strcpy(v[number_total_of_var].value2, valoare2); insert_in_table_variabila(number_total_of_var); number_total_of_var++;}

			     | TIP '['INDEX']''['INDEX']''['INDEX']' ID ';'
 			  	{char s1[256]; char s2[256]; strcpy(s1, $11); strcpy(s2, "clasa"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] cubul %s este declarat de mai multe ori in clasa [line: %d]\n", $11, yylineno+2);number_erori++;}
strcpy(v[number_total_of_var].tip,$1); strcpy(v[number_total_of_var].nm,$11); strcpy(v[number_total_of_var].rol,"clasa"); v[number_total_of_var].size = 3; insert_in_table_variabila(number_total_of_var); number_total_of_var++;};





lista_param : parametru 
		| parametru parametri 	
		|                     {printf("\n");}
		;


parametri : ',' parametru        
	    | ',' parametru parametri    
	    ;


parametru :  TIP ID {char s[256]; strcpy(s, $1); strcat(s, " "); strcat(s, $2); strcat(s, " "); strcat(f[number_total_of_funct].params, s);};




//main_delc

     
instructiuni :  statement ';' 
     | instructiuni statement ';'
     ;



statement:     		ID '(' lista_param2 ')'
			{char s[256]; strcpy(s, $1); if(control_err_funct(s) == 0) {printf("\n[EROARE] functia %s nu este declarata [line: %d]\n", $1, yylineno+2);number_erori++;}}


		        | ID '.' ID '(' lista_param2 ')'
			{char s[256]; strcpy(s, $3); if(control_err_funct(s)==0){ printf("\n[EROARE] functia %s nu este declarata [line: %d]\n", $3, yylineno+2);number_erori++;}}

        		| ID '.' ID ASSIGN regex
			{char s[256]; strcpy(s, $3); if(Control_declar_var_in_main(s) == 0) {printf("\n[EROARE] variabila %s nu este declarata [line: %d]\n", $3, yylineno+2);number_erori++;}}


        		| ID ASSIGN regex 	
			{char s[256]; strcpy(s, $1); if(Control_declar_var_in_main(s) == 0) {printf("\n[EROARE] variabila %s nu este declarata [line: %d]\n", $1, yylineno+2);number_erori++;}   else {char valoare[256]; sprintf(valoare, "%d", $3); strcpy(v[retIndex(s)].value, valoare);}}


        		| ID '+''+' 	
			{char s[256]; strcpy(s, $1); if(Control_increment(s) == 0) {printf("\n[EROARE] variabila %s nu este declarata [line: %d]\n",s,yylineno+2);number_erori++;}}


       			| ID '-''-'										
			{char s[256]; strcpy(s, $1); if(Control_decrement(s) == 0){ printf("\n[EROARE] variabila %s nu este declarata [line: %d]\n",s,yylineno+2);number_erori++;}}


        		| '[' INDEX ']' ID ASSIGN regex		
			{char s[256]; strcpy(s, $4); if(Control_declar_var_in_main(s) == 0) {printf("\n[EROARE] arrayul %s nu este declarat [line: %d]\n",s,yylineno+2);number_erori++;}}



         		| '[' INDEX ']''[' INDEX ']' ID ASSIGN '{'regex ',' regex '}' 		
			{char s[256]; strcpy(s, $7); if(Control_declar_var_in_main(s) == 0) {printf("\n[EROARE] matricea %s nu este declarata [line: %d]\n",s,yylineno+2);number_erori++;}}


			| '[' INDEX ']''[' INDEX ']''[' INDEX ']' ID ASSIGN '{'regex ',' regex ','regex	'}'		
			{char s[256]; strcpy(s, $10); if(Control_declar_var_in_main(s) == 0){ printf("\n[EROARE] cubul %s nu este declarat [line: %d]\n",s,yylineno+2);number_erori++;}}

        		| STRREV '(' ID ')'
			{char s[256]; strcpy(s, $3); if(Control_declar_var_in_main(s) == 0) {printf("\n[EROARE] variabila %s nu este declarata [line: %d]\n",s,yylineno+2); number_erori++;} else if(Control_string_funct(s, "$string") == 0 && Control_string_funct(s, "$char") == 0) { printf("\n[EROARE] STRREV nu primeste decat $string sau $char [line: %d] \n",yylineno+2);  number_erori++; } }

        		| STRCAT '(' ID ',' ID ')'	
   			{char s[256]; char s2[256]; strcpy(s, $3); strcpy(s2, $5); 
if(Control_declar_var_in_main(s)==0 || Control_declar_var_in_main(s2)==0){ printf("\n[EROARE] variabila %s nu este declarata [line: %d]\n",s,yylineno+2);number_erori++;} 
 else if((Control_string_funct(s, "$string") == 0 && Control_string_funct(s, "$char") == 0) || (Control_string_funct(s2, "$string") == 0 && Control_string_funct(s2, "$char") == 0)) printf("\n[EROARE] STRCAT nu primeste decat $string sau $char [line: %d] \n",yylineno+2);}

 
  		    	|STRCAT '(' ID ',' STR ')'
			{char s[256]; strcpy(s, $3); if(Control_declar_var_in_main(s)==0) {printf("\n[EROARE] variabila %s nu este declarata [line: %d]\n",s,yylineno+2);number_erori++;} else if(Control_string_funct(s, "$string") == 0 && Control_string_funct(s, "$char") == 0) printf("\n[EROARE] STRCAT nu primeste decat $string sau $char [line: %d] \n",yylineno+2);}
     

 			 | PRINT '(' e ',' TIP ')'{printf("%d\n", $3);}





                         | EVAL '(' e ')' '['ID']' { char s[256]; strcpy(s, $6); 
 if(Control_tip_for_Eval(s,"$int") == 0){printf("\n[EROARE] functia Eval nu primeste decat valori $int [line: %d] \n",yylineno+2);number_erori++;} else
 {printf("[S-a apelat functia Eval] valoarea expresiei este : %d\n", $3);} }
      




//instructiuni

     			 | intructiuni
       			 ;


intructiuni :      IF '(' condition_for_instr ')' THEN instructiuni ENDTHEN
                  | IF '(' condition_for_instr ')' THEN instructiuni ENDTHEN ELSE instructiuni ENDELSE
                  | WHILE '(' condition_for_instr ')' instructiuni ENDWHILE
                  | FOR '(' TIP ID ASSIGN regex ';' condition_for_instr  ';' statement')'  instructiuni ENDFOR
		  {char s1[256]; char s2[256]; strcpy(s1, $4); strcpy(s2, "for_iterator"); if(Control_declar_var_global(s1, s2) == 1){ printf("\n[EROARE] variabila %s este declarata de mai multe ori [line: %d]\n", $2,yylineno+2); number_erori++;} strcpy(v[number_total_of_var].tip,$3); strcpy(v[number_total_of_var].nm,$4);strcpy(v[number_total_of_var].rol,"iterator"); v[number_total_of_var].size = 0; char valoare[256]; sprintf(valoare, "%d", $6); strcpy(v[number_total_of_var].value, valoare);
insert_in_table_variabila(number_total_of_var); number_total_of_var++;}
	           ;



condition_for_instr : regex OPLOG regex
         | '(' condition_for_instr ')' OPLOG regex
         | regex OPLOG '(' condition_for_instr ')'
         | '(' condition_for_instr ')' OPLOG '(' condition_for_instr ')'
         ;


//end instructiuni

        
regex:'(' regex '*' regex ')' {$$ = $2 * $4;}
    | '(' regex '/' regex ')'{$$ = $2 / $4;}
    | '(' regex '+' regex ')' {$$ = $2 + $4;}
    | '(' regex '-' regex ')'{$$ = $2 - $4;}
    | '(' regex '%' regex ')'{$$ = $2 % $4;}
    | '(' regex '&''&' regex ')'{$$ = $2 && $5;}
    | '(' regex '|''|' regex ')'{$$ = $2 || $5;}
    | '!' regex{$$ = 404;}
    | e {$$ = $1;}
    | number {$$ = $1;}
    ;


number: INDEX								
      | NR_NEG								
      | NR_FLOAT			
      ;

e :             ID                              
                {char s[256]; strcpy(s, $1); if(Control_declar_var_in_main(s)==0) {printf("\n[EROARE] variabila %s nu este declarata [line: %d]\n",s,yylineno+2);number_erori++;}
 else {char s2[256]; strcpy(s2, returnVal(s)); if(strcmp(s2, "\0") == 0){ printf("\n[EROARE] variabila %s nu este initializata [line: %d]\n",s,yylineno+2);number_erori++;}} 
 $$ = atoi(v[retIndex($1)].value);}


  		| ID '.' ID
		{char s[256]; char s2[256]; strcpy(s, $1); strcpy(s2, $3); if(Control_declar_var_in_main(s)==0 && Control_declar_var_in_main(s2)==0) {printf("\n[EROARE] variabila %s nu este declarata [line: %d]\n",s,yylineno);number_erori++;}}


 		| '[' INDEX ']' ID     
                {char s[256]; strcpy(s, $4); if(Control_declar_var_in_main(s)==0) {printf("\n[EROARE] arrayul %s nu este declarat [line: %d]\n",s,yylineno+2);number_erori++;}else {char s2[256]; strcpy(s2, returnVal_vect(s)); if(strcmp(s2, "\0") == 0){ printf("\n[EROARE] vectorul %s nu este initializat [line: %d]\n",s,yylineno+2);number_erori++;}} $$ = atoi(v[retIndex($4)].value);}

 

		| '[' INDEX ']''[' INDEX ']' ID  
		{char s[256]; strcpy(s, $7); if(Control_declar_var_in_main(s)==0){ printf("\n[EROARE] matricea %s nu este declarata [line: %d]\n",s,yylineno+2);number_erori++;}else {char s2[256]; strcpy(s2, returnVal_matrix(s)); if(strcmp(s2, "\0") == 0){ printf("\n[EROARE] matricea %s nu este initializata [line: %d]\n",s,yylineno+2);number_erori++;}} $$ = atoi(v[retIndex($7)].value);}


		| '[' INDEX ']''[' INDEX ']''['INDEX']'  ID  
		{char s[256]; strcpy(s, $10); if(Control_declar_var_in_main(s)==0){ printf("\n[EROARE] cubul %s nu este declarat [line: %d]\n",s,yylineno+2);number_erori++;}  else {char s2[256]; strcpy(s2, returnVal_cub(s)); if(strcmp(s2, "\0") == 0){ printf("\n[EROARE] cubul %s nu este initializat [line: %d]\n",s,yylineno+2);number_erori++;}} 
 $$ = atoi(v[retIndex($10)].value);}
	

 		| ID '.' ID '(' lista_param2 ')' 
		{char s[256]; strcpy(s, $3); if(control_err_funct(s)==0){ printf("\n[EROARE] functia %s nu este declarata [line: %d]\n", $3, yylineno+2);number_erori++;}}


		| ID '(' lista_param2 ')'	
		{char s[256]; strcpy(s, $1); if(control_err_funct(s)==0) {printf("\n[EROARE] functia %s nu este declarata [line: %d]\n", $1, yylineno+2);number_erori++;}}


  		| STRLEN '(' ID ')'  		
		{char s[256]; strcpy(s, $3); if(Control_declar_var_in_main(s)==0) {printf("\n[EROARE] variabila %s nu este declarata [line: %d]\n",s,yylineno+2);number_erori++;} 
                else if(Control_string_funct(s, "$string") == 0 && Control_string_funct(s, "$char") == 0) {printf("\n[EROARE] functia STRLEN nu primeste decat $string sau $char [line: %d]\n",yylineno+2);number_erori++;}}


  		| STRLEN '(' STR ')'	{$$ = 404;}
 

		| STRCMP '(' ID ',' ID ')'	
	        {char s[256]; char s2[256]; strcpy(s, $3); strcpy(s2, $5); if(Control_declar_var_in_main(s)==0 || Control_declar_var_in_main(s2)==0) {printf("\n[EROARE] variabila %s nu este declarata [line: %d]\n",s,yylineno+2);number_erori++;} else if((Control_string_funct(s, "$string") == 0 && Control_string_funct(s, "$char") == 0) || (Control_string_funct(s2, "$string") == 0 && Control_string_funct(s2, "$char") == 0)) {printf("\n[EROARE]-functia STRLEN nu primeste decat $string sau $char [line: %d]\n",yylineno+2);number_erori++;}}



		| STRCMP '(' ID ',' STR ')'	
		{char s[256]; strcpy(s, $3); if(Control_declar_var_in_main(s)==0) {printf("\n[EROARE] variabila %s nu este declarata [line: %d]\n",s,yylineno+2); number_erori++;}
else if(Control_string_funct(s, "$string") == 0 && Control_string_funct(s, "$char") == 0){ printf("\n[EROARE]-functia STRCMP nu primeste decat $string sau $char [line: %d]\n",yylineno+2);number_erori++;} $$ = 404;}


 		| STRCMP '(' STR ',' ID ')'
		{char s[256]; strcpy(s, $5); if(Control_declar_var_in_main(s)==0){ printf("\n[EROARE] variabila %s nu este declarata [line: %d]\n",s,yylineno+2); number_erori++;}
 else if(Control_string_funct(s, "$string") == 0 && Control_string_funct(s, "$char") == 0) {printf("\n[EROARE]-functia STRCMP nu primeste decat $string sau $char [line: %d]\n",yylineno+2); number_erori++;}$$ = 404;}
  

		| STRCMP '(' STR ',' STR ')' {$$ = 404;}
                ;


lista_param2 : parametru2
		| parametru2 parametri2
                |
		;


parametri2 : ',' parametru2
	     | parametri2 ',' parametru2
	     ;


parametru2 : regex;





%%
int yyerror(char * s){
printf("[EROARE]: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
yyin=fopen(argv[1],"r");
FILE* file1,* file2,* file3;

file1 = fopen("symbol_table.txt", "w");
 
fprintf(file1, "\n  [Nume]	     [Type]              [Scop]           [Size]          [Value]\n================================================================================\n");      
fclose(file1);
file2 = fopen("funct.txt", "w");
fprintf(file2, "\n [Nume functie]        [Type]                  [Parametrii functiei]	        [Scop]					\n=========================================================================================\n");
fclose(file2);
file3 = fopen("class.txt", "w");
fprintf(file3, "\n [Nume clasa]  \n=============\n");
fclose(file3);
yyparse();
FILE* file4;
FILE* file5;
FILE* file6;
char c;
file4 = fopen("symbol_table.txt", "a");
fprintf(file4, "\n\n\n\n\n");
file5 = fopen("funct.txt", "r");
    c = fgetc(file5); 
    while (c != EOF) 
    { 
        fputc(c, file4); 
        c = fgetc(file5); 
    }
fprintf(file4, "\n\n\n\n\n");
file6 = fopen("class.txt", "r");
    c = fgetc(file6); 
    while (c != EOF) 
    { 
        fputc(c, file4); 
        c = fgetc(file6); 
    } 
fclose(file4);
fclose(file5);
fclose(file6);
system("rm class.txt");
system("rm funct.txt");
} 
