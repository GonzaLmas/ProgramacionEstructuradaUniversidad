#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
	{
		int n1, n2, res;
		system("cls");
		printf("Ingrese el primer nro: ");
		scanf("%d", &n1);
		printf("Ingrese el segundo nro: ");
		scanf("%d", &n2);
		res= n1 + n2;
		printf("El resultado de la suma es: %d", res);		
	}
