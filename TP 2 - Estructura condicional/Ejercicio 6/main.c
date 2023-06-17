#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
	{
		int e1, a1, e2, a2;
		
		printf("Ingrese la edad de la primer persona: ");
		scanf("%d", &e1);
		
		printf("Ingrese la altura de la primer persona: ");
		scanf("%d", &a1);
		
		printf("Ingrese la edad de la segunda persona: ");
		scanf("%d", &e2);
		
		printf("Ingrese la altura de la segunda persona: ");
		scanf("%d", &a2);
		
		if (e1 > e2)
		{
			if (a1 == a2)
			{
				printf("Ambas personas miden %d mts.", a1);
			}
			else
			{
				printf("La altura de la persona de mayor edad es: %d mts", a1);
			}
		}
		else
		{
			if (a1 == a2)
			{
				printf("Ambas personas miden %d mts.", a2);
			}
			else
			{
				printf("La altura de la persona de mayor edad es: %d mts", a2);
			}
		}		
	}
