#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
	{
		int nroInsc, importe, importeRecargo, lengua, nivel, formaPago, importeTotal;
		int nivelMax, lenguaMin, formaPagoMax, importeLengua1, importeLengua2, importeLengua3, importeLengua4;
		int nivelUno=1, nivelDos=2, nivelTres=3;
		int lenguaUno=1, lenguaDos=2, lenguaTres=3, lenguaCuatro=4;
		int formaPagoUno=1, formaPagoDos=2, formaPagoTres=3, formaPagoCuatro=4, formaPagoCinco=5;
		float valorPromInsc, porcentajeImportePago1, porcentajeLengua1, porcentajeLengua2, porcentajeLengua3, porcentajeLengua4;
		
		//Contadores
		int lengua1=0, lengua2=0, lengua3=0, lengua4=0;
		int nivel1=0, nivel2=0, nivel3=0;
		int formaPago1=0, formaPago2=0, formaPago3=0, formaPago4=0, formaPago5=0;
		int conInsc=0;
		int pagoNeto1=0, pagoNeto2=0, pagoNeto3=0, pagoNeto4=0, pagoNeto5=0;
		
		printf("Ingrese un numero de inscripcion: ");
		scanf("%d", &nroInsc);
		
		while (nroInsc != 0)
		{
			conInsc++;
			
			printf("Ingrese un nivel (1 a 3): ");
			scanf("%d", &nivel);
			
			switch (nivel)
			{
				case 1:
					nivel1++;
					break;
				case 2:
					nivel2++;
					break;
				case 3:
					nivel3++;
					break;
				default:
					break;
			}
			
			printf("Ingrese un importe antes de seleccionar una forma de pago: ");
			scanf("%d", &importe);
		
			printf("Ingrese una forma de pago (1 a 5): ");
			scanf("%d", &formaPago);
			
			switch (formaPago)
			{
				case 1:
					formaPago1++;
					importe = importe * 0.9;
					pagoNeto1+= importe;
					importeTotal+= pagoNeto1;
					break;
				case 2:
					formaPago2++;
					pagoNeto2+= importe;
					importeTotal+= pagoNeto2;
					break;
				case 3:
					formaPago3++;
					pagoNeto3+= importe;
					importeTotal+= pagoNeto3;
					break;
				case 4:
					formaPago4++;
					pagoNeto4+= importe;
					importeTotal+= pagoNeto4;
					break;
				case 5:
					formaPago5++;
					importeRecargo = importe * 1.2;
					pagoNeto5+= importe;
					importeTotal+= pagoNeto5;
					break;
				default:
					break;
			}
			
			printf("Ingrese una lengua (1 a 4): ");
			scanf("%d", &lengua);
				
			switch (lengua)
			{
				case 1:
					lengua1++;
					importeLengua1+=importe;
					break;
				case 2:
					lengua2++;
					importeLengua2+=importe;
					break;
				case 3:
					lengua3++;
					importeLengua3+=importe;
					break;
				case 4:
					lengua4++;
					importeLengua4+=importe;
					break;
				default:
					break;
			}
						
			printf("\nIngrese un numero de inscripcion: ");
			scanf("%d", &nroInsc);
		}
		
		
		//Determino el nivel al que más alumnos se incribieron
		if (nivel1 >= nivel2 && nivel1 >= nivel3)
			nivelMax = nivelUno;
		else if (nivel2 >= nivel1 && nivel2 >= nivel3)
			nivelMax = nivelDos;
		else
			nivelMax = nivelTres;			
			
		//Determino a cual lengua se inscribieron menos alumnos
		if (lengua1 < lengua2 && lengua1 < lengua3 && lengua1 < lengua4)
			lenguaMin = lenguaUno;
		else if(lengua2 < lengua1 && lengua2 < lengua3 && lengua2 < lengua4)
			lenguaMin = lenguaDos;			
		else if(lengua3 < lengua1 && lengua3 < lengua2 && lengua3 < lengua4)
			lenguaMin = lenguaTres;
		else 
			lenguaMin = lenguaCuatro;
			
		//Determino el método de pago más utilizado
		if (formaPago1 > formaPago2 && formaPago1 > formaPago3 && formaPago1 > formaPago4 && formaPago1 > formaPago5)
			formaPagoMax = formaPagoUno;
		else if (formaPago2 > formaPago1 && formaPago2 > formaPago3 && formaPago2 > formaPago4 && formaPago2 > formaPago5)
			formaPagoMax = formaPagoDos;
		else if (formaPago3 > formaPago1 && formaPago3 > formaPago2 && formaPago3 > formaPago4 && formaPago3 > formaPago5)
			formaPagoMax = formaPagoTres;
		else if (formaPago4 > formaPago1 && formaPago4 > formaPago2 && formaPago4 > formaPago3 && formaPago4 > formaPago5)
			formaPagoMax = formaPagoCuatro;
		else 
			formaPagoMax = formaPagoCinco;
			
			
		//Calculo el valor promedio de las inscripciones incluyendo el descuento. Pto 9
		valorPromInsc = (float)importeTotal/(float)conInsc;
		
		//Calculo el porcentaje de la forma de pago 1. Pto 8
		porcentajeImportePago1 = ((float)pagoNeto1 * 100)/(float)importeTotal;
		
		//Calculo el porcentaje de recaudación por cada lengua. Pto 10
		porcentajeLengua1 = ((float)importeLengua1 * 100)/(float)importeTotal; 
		porcentajeLengua2 = ((float)importeLengua2 * 100)/(float)importeTotal; 
		porcentajeLengua3 = ((float)importeLengua3 * 100)/(float)importeTotal; 
		porcentajeLengua4 = ((float)importeLengua4 * 100)/(float)importeTotal; 
			
			
		//Imprimo la información solicitada	
		printf("\nLa cantidad de inscriptos a nivel 1 fue: %d \n", nivel1);	
		printf("La cantidad de inscriptos a nivel 2 fue: %d \n", nivel2);	
		printf("La cantidad de inscriptos a nivel 3 fue: %d \n\n", nivel3);	
		printf("El nivel al que mas alumnos se inscribieron fue el nivel: %d \n\n", nivelMax);	
		
		printf("La cantidad de inscriptos a lengua 1 fue: %d \n", lengua1);
		printf("La cantidad de inscriptos a lengua 2 fue: %d \n", lengua2);
		printf("La cantidad de inscriptos a lengua 3 fue: %d \n", lengua3);
		printf("La cantidad de inscriptos a lengua 4 fue: %d \n\n", lengua4);
		printf("La lengua a la que menos alumnos se inscribieron fue: %d \n\n", lenguaMin);
		
		printf("La cantidad de pagos realizados de la forma 1 fue: %d \n", formaPago1);
		printf("La cantidad de pagos realizados de la forma 2 fue: %d \n", formaPago2);
		printf("La cantidad de pagos realizados de la forma 3 fue: %d \n", formaPago3);
		printf("La cantidad de pagos realizados de la forma 4 fue: %d \n", formaPago4);
		printf("La cantidad de pagos realizados de la forma 5 fue: %d \n\n", formaPago5);
		printf("El metodo de pago que mas se utilizo fue: %d \n\n", formaPagoMax);
		
		printf("La recaudacion de la forma de pago 1 fue: %d \n", pagoNeto1);
		printf("La recaudacion de la forma de pago 2 fue: %d \n", pagoNeto2);
		printf("La recaudacion de la forma de pago 3 fue: %d \n", pagoNeto3);
		printf("La recaudacion de la forma de pago 4 fue: %d \n", pagoNeto4);
		printf("La recaudacion de la forma de pago 5 fue: %d \n\n", pagoNeto5);
		
		printf("El porcentaje que representa lo descontado es de: %.2f \n\n", porcentajeImportePago1);
		
		printf("El valor promedio de las inscripciones incluyendo el descuento fue: %.2f \n\n", valorPromInsc);
		
		printf("El porcentaje que representa la recaudacion por lengua 1 fue: %.2f \n", porcentajeLengua1);
		printf("El porcentaje que representa la recaudacion por lengua 2 fue: %.2f \n", porcentajeLengua2);
		printf("El porcentaje que representa la recaudacion por lengua 3 fue: %.2f \n", porcentajeLengua3);
		printf("El porcentaje que representa la recaudacion por lengua 4 fue: %.2f \n", porcentajeLengua4);			
	}
