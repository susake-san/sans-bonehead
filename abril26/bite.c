#include<stdio.h>
int main()
{
	FILE *arquivo;
 	int c;	
 
	arquivo =fopen("bites.txt", "r");
	
	c = getc(arquivo);
	printf("%i %c\n",c, c);
	
	
	c = getc(arquivo);
	printf("%i %c\n",c, c);
	
	
	c = getc(arquivo);
	printf("%i %c\n",c, c);
	
	
	c = getc(arquivo);
	printf("%i %c\n",c, c);
	

	fclose(arquivo);

	return 0;
}
