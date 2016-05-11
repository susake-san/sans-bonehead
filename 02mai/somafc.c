/*aula de programação sobre funções*/

#include<stdio.h>

#include"s.h"
//extern float soma(float,float);

//float somar(float x, float y)
//{
 //   return x+y;
//}

int main()

{
    float b,a,soma;

    printf("ponha dois valores para soma-los\n");
    scanf("%f",&a);
    scanf("%f",&b);

    soma = somar(a , b);

    printf("resultado:%.2f\n", soma);

    return 0;
}
