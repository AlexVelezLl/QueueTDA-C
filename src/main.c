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
		printf("La cola no esta vacia\n");
		printf("%ld\n",(*cola1).tamano);
	}
	int elemento2 = 6;
	encolar(cola1,&elemento2);

	printf("%d\n",*(int*)(*(*cola1).inicio).elemento);
	printf("%d\n",*(int*)(*(*cola1).final).elemento);
	printf("%d\n",*(int*)decolar(cola1));
	printf("%d\n",*(int*)decolar(cola1));
	destruir_cola(cola1);
	printf("La cola se ha destruido\n");
	return 0;
}
