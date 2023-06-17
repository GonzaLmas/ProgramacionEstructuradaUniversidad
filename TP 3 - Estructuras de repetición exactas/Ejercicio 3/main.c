#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
	{
		/*Ingresar  8  valores  por  teclado,  y  a  partir  de  esto  sacar  el  promedio  general,  sacar  el 
		promedio  de  lo valores  pares y  el  promedio  de  los valores  impares.  Luego mostrar  por 
		pantalla cuantos números superaron el valor 15.*/
				
		float promGen, promPar, promImp, acuPar=0, acuImp=0, conPar=0, conImp=0;
		int numMayores=0, i=0;
		
		for (i=0;i<8;i++)
		{
			int n;
			
			printf("Ingrese un numero: ");
			scanf("%d", &n);
			
			if (n>15)
			{
				if (n%2 == 0)
				{
					conPar++;
					acuPar = acuPar + n;
				}
				else
				{
					conImp++;
					acuImp = acuImp + n;
				}
				
				numMayores++;
			}
			else
			{
				if (n%2 == 0)
				{
					conPar++;
					acuPar = acuPar + n;
				}
				else
				{
					conImp++;
					acuImp = acuImp + n;
				}
			}		
		}
			
		promPar = acuPar/conPar;
		promImp = acuImp/conImp;
		promGen = (acuPar + acuImp)/(conPar + conImp);
		
		printf("El promedio de los numeros pares es: %.2f \n", promPar);
		printf("El promedio de los numeros impares es: %.2f \n", promImp);
		printf("El promedio de los general es: %.2f \n", promGen);
		printf("La cantidad de numeros mayores a 15 ingresados es: %d \n", numMayores);		
	}
