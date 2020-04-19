//
// Created by david on 15/04/20.
//

#ifndef RASTROS_DADOSLISTAS_H
#define RASTROS_DADOSLISTAS_H

#include "../Camadas de dados/estruturasDados.h"

typedef struct nodo {
    void *valor;
    struct nodo *proximo;
} NODO, *LISTA;

#endif //RASTROS_DADOSLISTAS_H
