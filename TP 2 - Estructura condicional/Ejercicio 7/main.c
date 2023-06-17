#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
	{
		int valorHora, tiempoTrabajado, sueldo = 0;
		
		printf("Ingrese el valor de la hora del empleado: ");
		scanf("%d", &valorHora);
		
		printf("Ingrese el tiempo trabajado del empleado: ");
		scanf("%d", &tiempoTrabajado);
		
		if (tiempoTrabajado < 50)
		{
			sueldo = tiempoTrabajado * valorHora;
			printf("El sueldo del empleado es: %d", sueldo);
		}
		else if (tiempoTrabajado > 50 && tiempoTrabajado > 150)
		{
			sueldo = (tiempoTrabajado * valorHora) + 200;
			printf("El sueldo del empleado es: %d", sueldo);
		}
		else
		{
			sueldo = (tiempoTrabajado * valorHora) + 100;
			printf("El sueldo del empleado es: %d}", sueldo);
		}		
	}
