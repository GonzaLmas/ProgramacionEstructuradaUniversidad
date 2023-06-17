#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
	{
		int n1, n2, producto;
		
		printf("Ingrese el primer nro: ");
		scanf("%d", &n1);
		
		printf("Ingrese el segundo nro: ");
		scanf("%d", &n2);
		
		if (n1 > n2)
		{
			producto = n1 * n2;
			printf("El producto de los nros es: %d", producto);
		}
		else if (n1 == n2)
		{
			printf("Los nros son iguales.");
		}
		else
		{
			printf("El segundo nro ingresado es mayor.");
		}
	}
