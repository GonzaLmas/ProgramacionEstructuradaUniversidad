#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
	{
		/*Ingresar 25 números, calcular su promedio e imprimirlo*/
		
		int n, i=0, acu=0, promedio;
		
		for(i=0;i<25;i++)
		{
			printf("Ingrese un numero ");
			scanf("%d", &n);
			acu+=n;			
		}
		
		promedio = acu/25;
		
		printf("El promedio de los 25 numeros ingresados es: %d", promedio);		
	}
