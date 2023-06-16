#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
	{
		double valorVehiculo, cantVehiculo, sueldoBase = 500, sueldoFinal;
		
		system("cls");
		
		printf("Ingrese el valor en pesos del vehiculo vendido: ");
		scanf("%lf", &valorVehiculo);
		printf("Ingrese la cantidad vehiculos vendidos: ");
		scanf("%lf", &cantVehiculo);
		
		sueldoFinal = sueldoBase + (valorVehiculo * .1) + (cantVehiculo * 50);
		
		printf("El sueldo final del vendedor es: %.2lf pesos", sueldoFinal);		
	}	
