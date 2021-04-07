struct clasa{ char nm[50]; }c[500];

int number_total_of_class = 0;

void insert_in_table_clasa(int number_total_of_class)
{
	FILE* pointer_file;

	pointer_file = fopen("class.txt", "a"); fprintf(pointer_file, " %s\n", c[number_total_of_class].nm);
	
        fclose(pointer_file);
}
