char *returnVal(char nm[])
{
	for(int k = 0;k < number_total_of_var;k++)
	if(strcmp(v[k].nm, nm)==0)
        return v[k].value;
}
char *returnVal_cub(char nm[])
{
for(int k = 0;k < number_total_of_var;k++)
	if(strcmp(v[k].nm, nm)==0)      return v[k].value;
}

char *returnVal_matrix(char nm[])
{
for(int k = 0;k < number_total_of_var;k++)
	if(strcmp(v[k].nm, nm)==0)
      return v[k].value;
}

char *returnVal_vect(char nm[])
{
for(int k = 0;k < number_total_of_var;k++)
	if(strcmp(v[k].nm, nm)==0)
      return v[k].value;
}

 

int retIndex(char s[])
{
	for (int k= 0;k< number_total_of_var;k++)
	{
	if(strcmp(v[k].nm, s) == 0)
	return k;
	}
}

int Control_tip_for_Eval(char s[],char type[])
{
     for (int k=0; k<number_total_of_var;k++)
        {
	if(strcmp(v[k].nm, s)==0 && strcmp(v[k].tip, type) == 0)
        return 1;
        }
return 0;
}



int Control_string_funct(char s[], char type[])
{
	for(int k=0;k< number_total_of_var;k++)
	{
	if(strcmp(v[k].nm, s)==0 && strcmp(v[k].tip, type) == 0)
	return 1;
	}
	return 0;
}


int control_err_funct(char name[])
{
	for (int k= 0; k<= number_total_of_funct ;k++ )
	{
	if(strcmp(f[k].nm,name)==0)
			return 1;
	}	
	return 0;
}




int Control_declar_var_global(char name[], char rol[])
{
	for (int k= 0;k< number_total_of_var ;k++ )
	{
	if(strcmp(v[k].nm,name)==0 && strcmp(v[k].rol,rol)==0)
		return 1;
	}	
	return 0;
}

int Control_declar_var_in_main(char name[])
{
   for (int k = 0;k< number_total_of_var ;k++ )
{
   if(strcmp(v[k].nm,name)==0)
   return 1;
}	
	return 0;
}

int Control_increment(char name[])
{
 char a[256]; int i;
for (int k = 0; k< number_total_of_var ;k++ )
{
if(strcmp(v[k].nm,name)==0)
{

 i= atoi(v[k].value);  i=i+1;

 sprintf(a, "%d", i);	
 strcpy(v[number_total_of_var].value, a);
 return 1;
		}
	}	
	return 0;
}

int Control_decrement(char name[])
{   
 char a[256];  int i;
for (int k= 0;k < number_total_of_var ;k++ )
{
if(strcmp(v[k].nm,name)==0)
{
 i= atoi(v[k].value);  i=i-1;

 sprintf(a, "%d", i);
 strcpy(v[number_total_of_var].value, a);
 return 1;
}
}	
  return 0;
}

