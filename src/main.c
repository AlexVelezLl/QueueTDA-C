#include <stdio.h>
#include "estructuras.h"
#include <string.h>
#include <stdlib.h>
#include "funciones.h"

int main(){
	int tamString = 50;
	char entrada[tamString];
	cola *cola1 = crear_cola();
	int numero = 0;
	do{
		fgets(entrada, tamString, stdin);
		if(strcmp(entrada, "x\n")!=0){
			numero = atoi(entrada);
			int valid = encolar(cola1,&numero);
			if(valid==-1){
				printf("Error al encolar\n");
			}

		}
	}while(strcmp(entrada, "x\n")!=0);

	printf("La cola tiene %ld elementos.\n",(*cola1).tamano);//Aqui cambiar con tamano_cola
	/*
	 * Codigo para buscar elemento
	 *
	 */
	int *ele;
	do{
		ele = decolar(cola1);
	}while(ele!=NULL);

	printf("Elementos decolados\n");
	destruir_cola(cola1);
	return 0;
}
