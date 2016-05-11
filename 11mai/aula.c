#include<stdio.h>
#define MAX 10
#define ever (i = 0 ;i <= MAX ; i++)
 
int main(void)
{
	int n[ MAX ];
	int val,i;
	
	printf("ponha valores");
	
	for ever{
   		scanf("%d", &val);
		n[ MAX ] = val;
		}	
	
	printf("vetor\n");	
	
	for ever{
		printf("%i\n" ,n[ MAX ]);
		}


	return 0;
}
