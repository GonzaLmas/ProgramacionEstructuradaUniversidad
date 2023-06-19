#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
	{
		/* Ingresar datos y cargar un vector de 50 elementos, calcular 
			•  La suma de todos los elementos. OK
			•  El producto de todos los elementos. OK
			•  Mostrar del vector el elemento 50 al 1. OK
			•  Imprimir las componentes de indice par. 
			•  Imprimir las componentes de indice impar.*/
		
		int array [5];
		int acuSum=0, acuProd=1;
		int i=0;
		
		//pongo en 0 todas las posiciones del array
		for(i=0; i<5; i++)
		{
			array[i]=0;		
		}		
		
		//ingreso de los nros
		for(i=0; i<5; i++)
		{
			printf("Ingrese un nro: ");
			scanf("%d", &array[i]);
			
			acuProd *= array[i];
			acuSum += array[i];
		}
		
		printf("\n\nLa suma de los nros es: %d\n", acuSum);
		printf("\nEl prodcuto de los nros es: %d \n\n", acuProd);
		
		int j=4;
		
		for(j=4; j>=0; j--)
		{
			printf("\n Valores del vector: %d \n\n", array[j]);
		}	
			
		
			
			
			
			
	}
