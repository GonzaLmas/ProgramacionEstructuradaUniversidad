#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
	{
		double ady, op, sum, hip, per, sup;
		
		system("cls");
		
		printf("Ingrese el lado adyacente del triangulo: ");
		scanf("%lf", &ady);
		printf("Ingrese el lado opuesto del triangulo: ");
		scanf("%lf", &op);
		
		sum = ady * ady + op * op;
		
		hip = sqrt(sum);
		
		per = hip + ady + op;
		
		sup = (ady * op) / 2;
		
		printf("La hipotenusa del triangulo es: %.2lf \n", hip);
		printf("El perimetro del triangulo es: %.2lf \n", per);
		printf("La superficie del triangulo es: %.2lf \n", sup);
		
	}
