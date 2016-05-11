#include<stdio.h>
int main()
{
	FILE *arquivo;
 	int n;	
 
	arquivo =fopen("saida.txt", "r");
	while(! feof(arquivo) ){

//	if(fscanf(arquivo,"%i",&n)==1){
	
	int r=fscanf(arquivo,"%i",&n);

	printf("o numero é %i.\n", n);
	n=-1;			
		//}

		}
	fclose(arquivo);

	return 0;
}
