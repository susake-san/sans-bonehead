
#include <stdio.h>

int main(void)
{
    int n;  /* entrada  */
    int i;  /* contador */
    /* i = 1, 2, 3, ... , n-1, n */
    int j;  /* contador */
    /* j = 1, 2, 3, ... , n-1, n */

    scanf("%d", &n);

    if (n == 1)
    {
        printf("+\n");
    }
    else
        for(j=1; j<=n; j++)
        {
		for(i=1;i<=n; i++)
		{
	         
	   if(j==1||j==n)
	{

	   if(j==1||j==n)
                printf("+")
                else
                    printf("|")

                    for(i=1; i<=n; i++)
                    {
                        if(j==1||j==n)
                            printf("+")
                            else
                                printf("|")
                 

		           }

            for(i=1; i<=n; i++)
            {
                if(j==1||j==n) {
                    printf("+")
                    else
                        printf("|")
			}
                    }
                for(i=1; i<=n; i++)
                {
                    if(j==1||j==n)
                        printf("+")
                        else
                            printf("|")
                        }





