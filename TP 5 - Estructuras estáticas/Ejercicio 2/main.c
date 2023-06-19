#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
	{
		int array [10];
		int i = 0;
		
		for (i=0; i<10; i++){
			printf("Ingrese 10 nros: \n");
			scanf("%d", &array[i]);		
		}
		
		for (i=9; i>=0; i--){
			printf("\nEl array tiene los sigs valores: %d\n", array[i]);
		}		
	}
