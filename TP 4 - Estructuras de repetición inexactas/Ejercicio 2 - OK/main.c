#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
	{
		/* Ingresar facturas hasta nro de factura = 0, sumar sus importes y cúales y cuantas superan 
		los $1000.imprimir los resultados 
		a.  Sobre  el  ejercicio  anterior  indicar  cuántas  superan  los  $  1000.-imprimir  el resultado 
		b.  Sobre  el  ejercicio  anterior  indicar  cuántas  estan  entre  $  400  y  $  700 
		inclusive.imprimir el resultado*/
		
		int n, acu=0, conMayores=0, conEntre=0;
		
		do
		{
			printf("Ingrese una factura: ");
			scanf("%d", &n);
			
			acu+=n;
			
			if (n>1000)
			{
				conMayores++;
			}
			else if (n>=400 && n<=700)
			{
				conEntre++;
			}										
		} while (n!=0);
		
		printf("Las facturas que superan los $1000 son: %d \n", conMayores);
		printf("Las facturas que estan entre los $400 y los $700 son: %d \n", conEntre);
		printf("La suma de todas las facturas es: %d", acu);

		
		
		
		
		
		
		
		
		
		
		
	}
