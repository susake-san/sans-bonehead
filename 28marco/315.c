
/*feito por francine hendz monteiro
francine.monteiro@acad.pucrs.com
28/03/2016 */
#include<stdio.h>
int main(void)
{
	int a,b,soma,maior;
	maior = a;
	while(1) {
	  printf("ponha um primeiro valor para a soma\n");
	  scanf("%d", &a);
	  if (a < 0)
		  return 0;
	  printf("ponha um segundo valor para a soma\n");
	  scanf("%d", &b);
	  if (b < 0)
	  	return 0;
	  soma=a+b;
	  printf("o valor da soma é \n %i",soma);
	  if(a > b){
	  	printf("\n A é maior %i\n", a);
	
	  	}
	  else
	  	printf("\n B é maior %i\n", b);
	  }
	  return 0;
}

