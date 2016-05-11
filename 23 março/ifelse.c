#include<stdio.h>
int main(void)
{
	int n;
	int r;
	
	r=scanf("%d", &n);
	
	if(r != 1){
		printf("entrada invalida!!\n");
		return 1;
	}
	if(n % 2 == 0)
		printf("é par\n");
	else
		printf("é impar\n");

	return 0;
}
