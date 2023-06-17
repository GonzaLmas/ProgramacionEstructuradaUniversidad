#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
	{
		/* Ingresar N sueldos e indicar su suma y su promedio, imprimir resultados.*/
		
		int acu=0, con=0;
		float prom, sdo;
		
		do
		{	
			printf("Ingrese el sueldo: ");
			scanf("%f", &sdo);	
			
			acu+=sdo;
			con++;		
				
		}while (sdo >= 1 && sdo <= 9999999);
			
		prom = acu/con;
		
		printf("\nLa suma de los sueldos ingresados es de %.2f \n", acu);
		printf("El promedio de los sueldos ingresados es de %.2f", prom);	
	}
