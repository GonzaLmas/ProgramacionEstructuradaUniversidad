#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
	{
		/* Ingresar 30 valores.Contar cuantos están entre 1 y 10, cuantos entre 10 y 20, cuantos entre 
		20 y 30 y cuantos son mas de 30. Luego mostrar el porcentaje de cada grupo en el total.*/
		
		int i, con1=0, con2=0, con3=0, con4=0, conTotal=0;
		float porcentaje1, porcentaje2, porcentaje3, porcentaje4, porcentajeTotal;
		
		for (i=0;i<5;i++)
		{
			int n; 
		
			printf("Ingrese un numero: ");
			scanf("%d", &n);
			
			if (n>1 && n<10)
			{
				con1++;//Contador para valores entre 1 y 10
				conTotal++;
			}
			else if (n>10 && n<20)
			{
				con2++;//Contador para valores entre 10 y 20
				conTotal++;
			}
			else if (n>20 && n<30)
			{
				con3++;//Contador para valores entre 20 y 30
				conTotal++;
			}
			else if (n>30)
			{
				con4++;//Contador para valores mayores a 30
				conTotal++;
			}
		}
		 
		porcentajeTotal = conTotal;
		porcentaje1 = (con1 * 100)/porcentajeTotal;
		porcentaje2 = (con2 * 100)/porcentajeTotal;
		porcentaje3 = (con3 * 100)/porcentajeTotal;
		porcentaje4 = (con4 * 100)/porcentajeTotal;
	
		printf("El porcentaje de los numeros que estan entre el 1 y el 10 es de: %.2f \n", porcentaje1);
		printf("El porcentaje de los numeros que estan entre el 10 y el 20 es de: %.2f \n", porcentaje2);
		printf("El porcentaje de los numeros que estan entre el 20 y el 30 es de: %.2f \n", porcentaje3);
		printf("El porcentaje de los numeros mayores de 30 es de: %.2f ", porcentaje4);
		
	}
