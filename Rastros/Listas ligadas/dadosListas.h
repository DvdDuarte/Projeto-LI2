//
// Created by david on 15/04/20.
//
/**
 @file dadosListas.h
 Definicao da estrutura das listas ligadas
 */

#ifndef RASTROS_DADOSLISTAS_H
#define RASTROS_DADOSLISTAS_H

#include "../Camadas de dados/estruturasDados.h"

/**
 \brief Tipo de dados para as listas ligadas
 */
typedef struct nodo {
    void *valor;
    struct nodo *proximo;
} NODO, *LISTA;

#endif //RASTROS_DADOSLISTAS_H
