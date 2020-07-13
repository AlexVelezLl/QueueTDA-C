#include <stdlib.h>
#include "estructuras.h"

cola *crear_cola(){
	cola *p = (cola*) calloc(1,sizeof(cola));
	(*p).inicio = NULL;
	(*p).final = NULL;
	(*p).tamano = 0;
	return p;
}

int encolar(cola* mi_cola, void* elemento){
	if(elemento == NULL){
		return -1;
	}
	nodo_cola *nodo = (nodo_cola*)calloc(1,sizeof(nodo_cola));
	if(nodo==NULL){
		return -1;
	}
	(*nodo).elemento = elemento;
	(*nodo).siguiente = NULL;
	if((*mi_cola).tamano==0){
		(*nodo).anterior = NULL;
		(*mi_cola).inicio = nodo;
		(*mi_cola).final = nodo;
	}else{
		(*(*mi_cola).final).siguiente = nodo;
		(*mi_cola).final = nodo;	
	}
	(*mi_cola).tamano+=1;
	return 0;
}

//void *decolar(nodo_cola* mi_cola){
//}
