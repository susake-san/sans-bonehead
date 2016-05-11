 #include<stdio.h>

int main(void)
{
	int i;
	printf("inicio!\n");	
	
	for(i = 1;i <= 10; i++ )
	{ 
	
		if(i % 2 == 1)
		continue;
		printf("%d\n",i);
	}
	printf("fim!\n");
	return 0;
}
