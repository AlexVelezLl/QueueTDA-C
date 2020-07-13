typedef struct colaTDA{
        long int tamano;
        struct nodo_colaTDA *inicio;
        struct nodo_colaTDA *final;
}cola;

typedef struct nodo_colaTDA{
        void *elemento;
        struct nodo_colaTDA *siguiente;
        struct nodo_colaTDA *anterior;
} nodo_cola;

