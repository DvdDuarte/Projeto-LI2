//
// Created by david on 15/04/20.
//

#ifndef RASTROS_MODIFICALISTAS_H
#define RASTROS_MODIFICALISTAS_H

#include "dadosListas.h"
#include "../Camadas de dados/estruturasDados.h"

// Cria uma lista vazia
LISTA criar_lista();

// Insere um valor na cabeça da lista
LISTA insere_cabeca(LISTA L, void *valor);

// Devolve a cabeça da lista
COORDENADA *devolve_cabeca(LISTA L);

// Devolve a cauda da lista
LISTA proximo(LISTA L);

// Remove a cabeça da lista (libertando o espaço ocupado) e devolve a cauda
LISTA remove_cabeca(LISTA L);

// Devolve verdareiro se a lista é vazia
int lista_esta_vazia(LISTA L);


LISTA acrescenta_elementos (LISTA L, COORDENADA *c);

#endif //RASTROS_MODIFICALISTAS_H
