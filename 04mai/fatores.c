#include<stdio.h>

//int fatorial(int);

int fatorial(int *n)
{
	int r = 1;	
	int f = *n;

	while(f > 0)
	{
		r = *n * r;	
		f = f -1;
	}

	return f;
}
int main()
{
	int n;
	int f;
	scanf("%d", &n); 
	fatorial(&n);
	printf("N=%i, F=%i\n", n,f);
	
	return 0; 
}
