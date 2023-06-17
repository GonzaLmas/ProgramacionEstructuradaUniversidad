#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
	{
		/* Ingresar 10 valores, indicar e imprimir cuántos son positivos, cuántos negativos y cuántos 
		ceros*/
		
		int n, i=0, conPos=0, conNeg=0, conCeros=0;
		
		for (i=0;i<10;i++)
		{
			printf("Ingrese un numero ");
			scanf("%d", &n);
			
			if (n<0)
			{
				conNeg++;
			}
			else if (n>0)
			{
				conPos++;
			}
			else
			{
				conCeros++;
			}			
		}
		
		printf("La cantidad de numeros positivos es %d\n", conPos);
		printf("La cantidad de numeros negativos es %d\n", conNeg);
		printf("La cantidad de ceros es %d", conCeros);
	}
