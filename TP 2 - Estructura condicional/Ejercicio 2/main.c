#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
	{
		int n;
		
		printf("Ingrese un nro: ");
		scanf("%d", &n);
		
		if (n == 0)
		{
			printf("El nro ingresado es cero");
		}
		else if (n > 0)
		{
			printf("El nro ingresado es positivo");
		}
		else
		{
			printf("El nro ingresado es negativo");
		}
	}
