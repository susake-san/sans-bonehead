#include<stdio.h>
int main(void)
{
	int numconta;
	float saldin,totencarg,totcredito,limcred,saldo;
        while (1)
   {

        printf("informe o numero da conta(-1 para termminar)");
	scanf("%d", &numconta);
	if(numconta != -1)
		{
		printf("\n informe o saldo inicial:");
		scanf("%f", &saldin );
		printf("\n informe o total dos encargos:");
		scanf("%f", &totencarg);
		printf("\n informe o total dos creditos:");
                scanf("%f", &totcredito);
		printf("\n informe o limite de credito:");
		scanf("%f", &limcred);
		saldo=saldin+totencarg-totcredito;
		printf("\n saldo:" );		
  		if(saldo>limcred){
			printf("\nnumero do devedor\n:%i",numconta);
			printf("seu saldo é exedente \n %f", saldo);
		}
		else
   	   		 return 0;
	}
return 0;
}
