/*aula de programação sobre funções*/

#include<stdio.h>

void soma(float,float,float*);

void somar(float x,float y,float *r)
{
	*r = x + y;
}
int main()

{
    float a,b,soma;

    printf("ponha dois valores para soma-los\n");
    scanf("%f",&a);
    scanf("%f",&b);

    somar(a,b, &soma);

    printf("resultado:%.2f\n", soma);

    return 0;
}
