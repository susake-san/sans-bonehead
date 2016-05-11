#include<stdio.h>
int main(void)

{
	float b,a,soma;
	
	printf("ponha dois valores para soma-los\n");
	scanf("%f",&a);
	scanf("%f",&b);
	soma = a + b;
	printf("resultado:%.2f\n",soma);
	
	return 0;
	
}
