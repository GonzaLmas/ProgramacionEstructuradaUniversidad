#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
	{
		int tiempoTrabajado, sueldo;
		
		system ("cls");
		
		printf("Ingrese el tiempo trabajado: ");
		scanf("%d", &tiempoTrabajado);
		
		sueldo = tiempoTrabajado * 10;
		
		printf("El sueldo del empleado es: %d", sueldo);		
	}
