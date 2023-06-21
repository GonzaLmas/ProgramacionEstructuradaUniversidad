#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void ordenarVectorDesc(int v[], int n);
void ordenarVectorAsc(int v[], int n);

int main(int argc, char *argv[]) 
{
	int vMeses[12];
	int vProv[8];
	int vCausas[6];
	int vCant[6];
		
	int nroReg, mesReg, nroProv, nroCausa, aux=0;
	int cant=0, causaMuerteMayor=0, mesMayorMuerte=0, totalCausasMuerte=0, minCausaMuerte=9999, menorCasosProv=0;
	int x=0, y=0, z=0;
	
	int mCausasProv[6][8];
	int mMayorCausasMes[6][12];

	
	//Inicializo todos los vectores con valor 0
	for(x=0;x<12;x++){
		vMeses[x]=0;
		for(y=0;y<8;y++){
			vProv[y]=0;
			for(z=0;z<6;z++){
				vCausas[z]=0;
				vCant[z]=0;
				mCausasProv[z][y]=0;
				mMayorCausasMes[z][x]=0;
			}
		}
	}
	
	printf("Ingrese un nro de registro: ");
	scanf("%d", &nroReg);

	while(nroReg != 0){
		printf("Ingrese el mes:\n1-Enero\n2-Febrero\n3-Marzo\n4-Abril\n5-Mayo\n6-Junio\n7-Julio\n8-Agosto\n9-Septiembre\n10-Octubre\n11-Noviembre\n12-Diciembre\n");
		scanf("%d", &mesReg);		
		
		printf("Ingrese la provincia:\n1-BsAs\n2-Formosa\n3-Catamarca\n4-Chubut\n5-Neuquen\n6-Jujuy\n7-Salta\n8-Cordoba\n");
		scanf("%d", &nroProv);
		
		printf("Ingrese la causa:\n1-Covid\n2-Cardiaco\n3-Vial\n4-Suicidio\n5-Doméstico\n6-Natural\n");
		scanf("%d", &nroCausa);
				
		printf("Ingrese la cantidad de muertes: ");
		scanf("%d", &cant);		
		
		//Contadores y acumulador para cada posición del vector que ingresa el usuario
		vMeses[mesReg-1]++;
		vProv[nroProv-1]++;
		vCausas[nroCausa-1]++;	
		vCant[nroCausa-1] += cant;
		mCausasProv[nroCausa-1][nroProv-1] += cant;
		mMayorCausasMes[nroCausa-1][mesReg-1] += cant;

		
		printf("Ingrese un nro de registro. Ingrese 0 para indicar que termino de cargar los registros: ");
		scanf("%d", &nroReg);
	}

	//Casos de covid por provincia	
	for(x=0;x<1;x++){
		for(y=0;y<8;y++){
			printf("\nLos casos de covid para la provincia %d son: %d\n\n", y+1, mCausasProv[x][y]);
		}
	}
	
	//Mayor causa muerte y mayor mes
	for(x=0;x<6;x++){
		for(y=0;y<12;y++){
			if(mMayorCausasMes[x][y] > causaMuerteMayor){
				causaMuerteMayor = mMayorCausasMes[x][y];
				mesMayorMuerte = y;
			}
		}
	}	
	
	printf("La mayor causa de muerte fue %d y en el mes %d\n\n", causaMuerteMayor, mesMayorMuerte+1);
	
	//Total de causas de muerte en cada provincia, qué porcentaje representa del total general del país
	for(x=0;x<6;x++){
		for(y=0;y<8;y++){
			totalCausasMuerte += mCausasProv[x][y];
		}
	}

	for(x=0;x<8;x++){
		printf("El total de causa de muerte de la provincia %d es: %d\n\n", x+1, mCausasProv[x][x]);		
	}	
	
	//Para cada causa de muerte, qué provincia tiene menos casos
	for(x=0;x<6;x++){
		minCausaMuerte;
		for(y=0;y<8;y++){
			if(mCausasProv[x][y] < minCausaMuerte && mCausasProv[x][y] > 0){
				minCausaMuerte = mCausasProv[x][y];
			}
		}
		printf("Para la causa de muerte %d, la provincia que tiene menos casos es %d\n\n", x+1, minCausaMuerte);
	}		
	
	//Ordene de mayor a menor (descendente) el total de muertes según la causa (e imprimirlo en pantalla)
	ordenarVectorDesc(vCant, 5);//Invoco al procedimiento que ordena el vector de mayor a menor
	
	for(x=0;x<6;x++){
		printf("La cantidad de muertes segun la causa de mayor a menor %d\n", vCant[x]);
	}		
	
	//Ordene de menor a mayor (ascendente) el total de muertes según la provincia (e imprimirlo en pantalla)
	ordenarVectorAsc(vCant, 5);//Invoco al procedimiento que ordena el vector de menor a mayor
	
	for(x=0;x<6;x++){
		printf("La cantidad de muertes segun la causa de menor a mayor %d\n", vCant[x]);
	}
	
}

void ordenarVectorDesc(int v[], int n)//Procedimiento para ordena el vector de mayor a menor
{
	int p=6, x=0, y=0, aux=0;
	
	for(x=0;x<6-1;x++){
		for(y=0;y<6-x-1;y++){
			if(v[y] < v[y+1]){
				aux = v[y];
				v[y] = v[y+1];
				v[y+1] = aux;
			}
		}		
	}
}

void ordenarVectorAsc(int v[], int n)//Procedimiento para ordena el vector de menor a mayor
{
	int p=6, x=0, y=0, aux=0;
	
	for(x=0;x<6-1;x++){
		for(y=0;y<6-x-1;y++){
			if(v[y] > v[y+1]){
				aux = v[y];
				v[y] = v[y+1];
				v[y+1] = aux;
			}
		}		
	}		
}




	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
