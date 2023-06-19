#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
	{
		/*Ingresar 10 sueldos y edades de una empresa y calcular 
		•  Sueldo promedio OK
		•  Sueldo promedio de los empleados que tienen entre 23 y 40 años OK
		•  Edad promedio OK
		•  Cantidad de empleados mayores a 30 años y sueldo menor a $ 1000. 
		•  Cantidad de empleados con edades menor a la edad promedio OK  */ 
		
		
		int sueldos[10];
		int edades[10];
		int con=0, acu=0, acuE=0, conE=0, edadProm=0, edadMasTreinta=0, edadMenorProm=0, sdoProm=0;
		int i=0, acuSdo=0, conSdo=0, sdoEntreProm=0, conMasTreinta=0;
		
		for(i=0; i<9; i++)
			sueldos[i]=0;
			
		for(i=0; i<9; i++)
			edades[i]=0;
		
		
		for(i=0; i<4; i++){
			printf("Ingrese los sueldos: ");
			scanf("%d", &sueldos[i]);
			
			acu+=sueldos[i];
			con++;	
		}
		
		for(i=0; i<4; i++){
			printf("Ingrese las edades: ");
			scanf("%d", &edades[i]);
			
			acuE+=edades[i];
			conE++;
		}
		
		sdoProm = acu/con;
		edadProm = acuE/conE;
		
		for(i=0; i<4; i++){
			if(edades[i]<edadProm){
				edadMenorProm++;
			}
		}
		
		for(i=0; i<4; i++){
			if(edades[i]>23 && edades[i]<40){
				acuSdo+=sueldos[i];
				conSdo++;		
			}
		}
		
		sdoEntreProm = acuSdo/conSdo;
		
		for(i=0; i<4; i++){
			if(edades[i]>30 && sueldos[i]<1000)
				conMasTreinta++;
		}
			
		printf("\n\nEl sueldo promedio es: %.2f\n\n", (float)sdoProm);
		printf("La edad promedio es: %.2f\n\n", (float)edadProm);
		printf("Los empleados con menor edad que el promedio son: %.2f\n\n", (float)edadMenorProm);
		printf("\n\nEl sueldo promedio de los empleados entre 23 y 40 anios es: %.2f\n\n", (float)sdoEntreProm);
		printf("Los empleados mayores a 30 y sdo menor a 1000 son: %.2f\n\n", (float)conMasTreinta);
	}
