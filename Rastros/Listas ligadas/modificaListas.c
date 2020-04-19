//
// Created by david on 15/04/20.
//

#include <stdlib.h>
#include "modificaListas.h"



// Cria uma lista vazia
LISTA criar_lista(){

    LISTA list;

    list -> valor = NULL;
    list -> proximo = NULL;

    return list;

}

// Insere um valor na cabeça da lista
LISTA insere_cabeca(LISTA L, void *valor){

    LISTA novo = malloc(sizeof(NODO));

    novo -> valor = valor;
    novo -> proximo = L;

    return novo;

}

// Devolve a cabeça da lista
COORDENADA *devolve_cabeca(LISTA L){

 return /*(void*)*/L -> valor;

}

// Devolve a cauda da lista
LISTA proximo(LISTA L){

    return L->proximo;

}

// Remove a cabeça da lista (libertando o espaço ocupado) e devolve a cauda
LISTA remove_cabeca(LISTA L){

    LISTA x = L == NULL ? NULL : L -> proximo;
    free(L);
    return x;

}

// Devolve verdareiro se a lista é vazia
int lista_esta_vazia(LISTA L){

    if (L -> valor == NULL) return 1;
    else return 0;

}


LISTA acrescenta_elementos (LISTA L, COORDENADA *c) {

    LISTA nova_lista = malloc(sizeof(NODO));
    nova_lista -> valor = c;
    nova_lista -> proximo = L;
    return nova_lista;

}
