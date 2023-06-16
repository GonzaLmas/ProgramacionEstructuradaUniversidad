#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
	{
		int ady, op, hip, perimetro;
		system("cls");
		printf("Ingrese el lado adyacente del triangulo : ");
		scanf("%d", &ady);
		printf("Ingrese el lado opuesto del triangulo ");
		scanf("%d", &op);
		printf("Ingrese la hipotenusa del triangulo ");
		scanf("%d", &hip);
		perimetro = ady + op + hip;
		printf("El perimetro del triangulo es: %d", perimetro);	
	}
