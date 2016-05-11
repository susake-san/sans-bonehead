#include<stdio.h>

double fatorial(double);

double fatorial(double n)
{
	double r = 1L;	
	double f;

	for(f = 1; f<= n;f = f +1)
		r = n * r;	
		
	return f;
}
int main()
{
	double n;

	scanf("%", &n);
	
	double f = fatorial(n);

	printf("N=%f, F=%f\n", n , f );
	
	return 0; 
}
