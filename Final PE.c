#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void ordenarVectorDesc(int v[], int n);
void ordenarVectorAsc(int v[], int n);

int main(int argc, char *argv[]) 
{
	
	int vModelos[6];
	int vSucursales[7];
	int vNroModelos[6];
	int vPrecio[6];
	int vCant[6];
	
	int nroPedido, nroSucursal, nroModelo, precio, cant, mayorModeloVenta=0, conNroPedido=0, sucursalMayorVenta=0;
	int descuentoSucursal, cantTotalVentas;
	
	int x=0, y=0, i=0;
	
	int mModeloSucursal[6][7];
	
	//Inicializo todos los vectores con valor 0
	for(x=0;x<7;x++){
		vSucursales[x]=0;
		for(y=0;y<6;y++){
			vModelos[x]=0;
			vNroModelos[x]=0;
			vPrecio[x]=0;
			vCant[x]=0;
			mModeloSucursal[y][x]=0;
		}
	}
	
	
	for(i=0;i<6;i++){

		printf("Ingrese el precio del modelo %d: \n", i+1);
		scanf("%d", &precio);
	
		vPrecio[i-1]=precio;
	}
	
	printf("\n\nIngrese el nro de pedido: \n");
	scanf("%d", &nroPedido);
		
	while(nroPedido != 0){
		conNroPedido++;
		
		printf("Ingrese el nro de sucursal (1-7): \n");
		scanf("%d", &nroSucursal);
		
		if(nroSucursal == 4){
			descuentoSucursal = (vPrecio[3]*5)/100;
		} else if(nroSucursal == 5){
			 		descuentoSucursal = (vPrecio[4]*5)/100;
		}
		
		printf("Ingrese el nro de modelo (1-6): \n");
		scanf("%d", &nroModelo);
		
		printf("Ingrese la cantidad de ventas: \n");
		scanf("%d", &cant);
		
		//Contadores y acumulador para cada posición del vector que ingresa el usuario
		vSucursales[nroSucursal-1]++;
		vModelos[nroModelo-1]++;
		vCant[nroModelo-1]+=cant;
		mModeloSucursal[nroModelo-1][nroSucursal-1] += cant;		
		
		printf("Ingrese el nro de pedido: \n");
		scanf("%d", &nroPedido);		
	}
	
	
	//Cuantos modelos se vendieron en la sucursal 1
	for(x=0;x<1;x++){
		for(y=0;y<1;y++){
			printf("\nLos modelos que se vendieron en la sucursal %d son: %d\n", y+1, mModeloSucursal[x][y]);
		}
	}
	
	
	//Cantidad total de pedidos
	printf("\nLa cantidad total de pedidos fue: %d\n\n", conNroPedido);
	
	
	//Ordene de forma descendente la cantidad de ventas
	ordenarVectorDesc(vCant, 5);//Invoco al procedimiento que ordena el vector de mayor a menor
	
	for(x=0;x<6;x++){
		printf("La cantidad de ventas de mayor a menor %d\n", vCant[x]);
	}		
	
	//Ordene de forma ascendente la cantidad de ventas
	ordenarVectorAsc(vCant, 5);//Invoco al procedimiento que ordena el vector de menor a mayor
	
	for(x=0;x<6;x++){
		printf("\nLa cantidad de ventas de menor a mayor %d", vCant[x]);
	}
	
	
	//Modelo que más se vendió y en que sucursal fue la mayor
	for(x=0;x<6;x++){
		for(y=0;y<7;y++){
			if(mModeloSucursal[x][y] > mayorModeloVenta){
				mayorModeloVenta = mModeloSucursal[x][y];
				sucursalMayorVenta = y;
			}
		}
	}	
	
	printf("\n\nEl modelo que mas se vendio fue %d y en la sucursal %d\n\n", mayorModeloVenta, sucursalMayorVenta+1);
	
	
	//Cantidad total de ventas
	for(x=0;x<6;x++){
		cantTotalVentas += vCant[x];
	}
	
	printf("La cantidad total de ventas fue: %d ", cantTotalVentas);
	
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

	













































































































































































































