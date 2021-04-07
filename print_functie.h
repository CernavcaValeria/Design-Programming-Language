struct functii{ char tip[30]; char rol[50];  char params[500]; char nm[75]; }f[500];

int number_total_of_funct = 0;
void insert_in_table_functie(int number_total_of_funct)
{
	FILE* pointer_file;
	int k;
	pointer_file = fopen("funct.txt", "a");


	fprintf(pointer_file, " %s", f[number_total_of_funct].nm);
	for(k= 0;k<= 13 - strlen(f[number_total_of_funct].nm);k++)
		fprintf(pointer_file, " ");
	
	fprintf(pointer_file, "||   %s", f[number_total_of_funct].tip);
	for(k= 0;k <= 19 - strlen(f[number_total_of_funct].tip);k++)
		fprintf(pointer_file, ".");


	fprintf(pointer_file, "||   ( %s)", f[number_total_of_funct].params);
	for(k= 0;k<= 27 - strlen(f[number_total_of_funct].params);k++)
		fprintf(pointer_file, ".");

	fprintf(pointer_file, "||   %s\n", f[number_total_of_funct].rol);

	fclose(pointer_file);
}

