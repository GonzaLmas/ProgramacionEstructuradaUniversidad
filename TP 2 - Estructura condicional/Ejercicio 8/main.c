#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
	{
		int d, m, a;
		
		printf("Ingrese el dia: ");
		scanf("%d", &d);
		
		printf("Ingrese el mes: ");
		scanf("%d", &m);
		
		printf("Ingrese el año: ");
		scanf("%d", &a);
		
		if (d >= 1 && d <= 31)
		{
			if (m >= 1 && m <= 12)
			{
				if ( a != 0)
				{
					printf("La fecha ingresada es valida.");
				}
				else
				{
					printf("La fecha ingresada no es valida.");
				}
			}
			else
			{
				printf("La fecha ingresada no es valida.");
			}
		}
		else
		{
			printf("La fecha ingresada no es valida.");
		}		
	}
