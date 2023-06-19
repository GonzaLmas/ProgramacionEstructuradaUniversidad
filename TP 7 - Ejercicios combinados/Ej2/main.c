#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
	{
		/* Cree un programa para ingresar 10 números en un vector y luego que permita introducir un 	
		número para realizar una búsqueda. Permita que el operador del programa elija que tipo 
		de algoritmo quiere utilizar por medio de un menú (debe ser búsqueda binaria o secuencial)*/
		
		int array[10];
		int i=0, aux;
		int n, resSec;
		int x, resBin;
		
		//Ingreso nros en el array OK
		for(i=0;i<10;i++){
			printf("Ingrese un nro: \n");
			scanf("%d", &array[i]);
		}
		
		//Pido que elija un nro OK
		printf("Ingrese el nro que desea saber la posicion: ");
		scanf("%d", &n);
		
		//Pido que elija el método por el que quiere buscar OK
		printf("Ingrese el metodo por el cual desea buscar el nro. 1 para busqueda secuencial\t y 2 para busqueda binaria: ");
		scanf("%d", &aux);

		if(aux==1){
			resSec = busquedaSecuencial(array, n);
			printf("El nro buscado esta en la posicion %d", resSec);
		}
		else{
			resBin = busquedaBinaria(array, n);
			printf("El nro buscado esta en la posicion %d", resBin);
		}
	}
	
int busquedaSecuencial(int array[], int dato)
	{			
		int i=0;
			
		for(i=0;i<10;i++){
			if(array[i]==dato)
				return i;
			}
		return -1;
	}
			
int busquedaBinaria(int array[], int dato)
	{
		int n=10;
		int centro, inf=0, sup=n-1;
		
		while(inf<=sup){
			centro=((sup-inf)/2)+inf;
			if(array[centro] == dato)
				return centro;
			else if(dato < array[centro])
					sup = centro-1;
				else
					inf = centro+1;
		}
		
		return -1;		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
