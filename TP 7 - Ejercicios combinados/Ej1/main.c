#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
	{
		
		/* Ingrese 20 valores en un vector e imprimalo ordenado utilizando 
		el algoritmo bubblesort u ordenamiento por burbujeo*/
		int array [] = {10,54,66,31,23,11,16,58,12,55,60,32,3,35,4,7,9,21,44,6};
		int aux, i=0, j=0;
		
		for(i=0;i<20;i++){
			for(j=0;j<20;j++){
				if(array[j] > array[j+1]){
					aux = array[j+1];
					array[j+1] = array[j];
					array[j] = aux;
				}
			}
		}
		
		for(i=0;i<20;i++){
			printf("%d\n", array[i]);
		}		
	}
