struct variabile{ char tip[30];  char rol[30]; char nm[30];  char value[500]; char value1[500]; char value2[500]; int size;}v[500];

int number_total_of_var = 0;

void insert_in_table_variabila(int number_total_of_var)
{   
 	FILE* pointer_file;
        int k;
	char type[256];
	pointer_file = fopen("symbol_table.txt", "a");//anexare



	if(v[number_total_of_var].size == 2)
	        strcpy(type, "Matricea");
	else if(v[number_total_of_var].size == 1)
		strcpy(type, "Vectorul");
	else if (v[number_total_of_var].size == 0)
                strcpy(type, "Variabila");
        else if (v[number_total_of_var].size == 3)
                strcpy(type, "Cub");


	fprintf(pointer_file, " %s", v[number_total_of_var].nm);
	for(k= 1;k<= 12 - strlen(v[number_total_of_var].nm);k++) fprintf(pointer_file, " ");
		

	fprintf(pointer_file, "||   %s", v[number_total_of_var].tip);
	for(k= 1;k<= 14 - strlen(v[number_total_of_var].tip);k++) fprintf(pointer_file, ".");
		

	fprintf(pointer_file, "||   %s", v[number_total_of_var].rol);
	for(k= 1;k<= 14 - strlen(v[number_total_of_var].rol);k++) fprintf(pointer_file, ".");
		

	fprintf(pointer_file, "||   %s", type);
	for(k= 1;k<= 13 - strlen(type);k++) fprintf(pointer_file, ".");
		

	if(strcmp(v[number_total_of_var].value, "\0") == 0)  //CAZ CAND VARIABILA NU ESTE INITIALIZATA
		fprintf(pointer_file, "||   NON_VAL\n");
        else if(v[number_total_of_var].size == 3) {fprintf(pointer_file, "||   %s,%s,%s\n", v[number_total_of_var].value, v[number_total_of_var].value1, v[number_total_of_var].value2);}
 else if(v[number_total_of_var].size == 2) {fprintf(pointer_file, "||   %s,%s\n", v[number_total_of_var].value, v[number_total_of_var].value1);}
else if(v[number_total_of_var].size == 1) {fprintf(pointer_file, "||   %s\n", v[number_total_of_var].value);}
	else
		fprintf(pointer_file, "||   %s\n", v[number_total_of_var].value);
	fclose(pointer_file);
}
