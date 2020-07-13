#include <stdio.h>
#include "estructuras.h"
#include "funciones.h"
#include <stdlib.h>

int main(){
	struct colaTDA *cola1 = crear_cola();
	int elemento = 5;
	encolar(cola1,&elemento);
	if((*cola1).final == NULL){
		printf("La cola esta vacia");
	}else{
		printf("La cola no esta vacia");
	}
	free(cola1);
	return 0;
}
