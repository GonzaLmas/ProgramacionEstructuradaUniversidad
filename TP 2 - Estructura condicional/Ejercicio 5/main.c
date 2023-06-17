#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
	{
		int n1, n2, n3;
		
		printf("Ingrese el primer lado del triangulo: ");
		scanf("%d", &n1);
		
		printf("Ingrese el segundo lado del triangulo: ");
		scanf("%d", &n2);
		
		printf("Ingrese el tercer lado del triangulo: ");
		scanf("%d", &n3);
		
		if (n1 == n2 && n2 == n3)
		{
			printf("El triangulo es equilatero.");
		}
		else if(n1 == n2 || n2 == n3 || n1 == n3)
		{
			printf("El triangulo es isoseles.");
		}
		else
		{
			printf("El triangulo es escaleno.");
		}		
	}
