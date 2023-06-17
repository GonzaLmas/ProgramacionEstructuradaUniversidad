#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
	{
		int n1, n2, resultado;
		
		printf("Ingrese el primer nro: ");
		scanf("%d", &n1);
		
		printf("Ingrese el segundo nro: ");
		scanf("%d", &n2);
		
		if (n1 > n2)
		{
			resultado = n1 - n2;
		}
		else
		{
			resultado = n2 - n1;
		}
		
		printf("El resultado de la resta del nro mayor con el nro menor es: %d", resultado);		
	}
