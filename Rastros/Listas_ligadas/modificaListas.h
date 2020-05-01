//
// Created by david on 15/04/20.
//

/**
 @file modificaListas.h
 Definicao das funcoes que modificam as listas ligadas
 */

#ifndef RASTROS_MODIFICALISTAS_H
#define RASTROS_MODIFICALISTAS_H

#include "dadosListas.h"
#include "../Camadas_de_dados/estruturasDados.h"

// Cria uma lista vazia
/**
 \brief Definicao da funcao que cria uma lista ligada vazia
 * @return
 */
LISTA criar_lista();

// Insere um valor na cabeça da lista
/**
 \brief Definicao da funcao que insere um valor na cabeca de uma lista ligada
 * @param L Apontador da lista ligada
 * @param valor O valor a adicionar na cabeca
 * @return da lista ligada com o valor na cabeca
 */
LISTA insere_cabeca(LISTA L, void *valor);

// Devolve a cabeça da lista
/**
 \brief Definicao da funcao que devolve a cabeca da lista ligada
 * @param L Apontador da lista ligada
 * @return A cabeca da lista ligada
 */
COORDENADA *devolve_cabeca(LISTA L);

// Devolve a cauda da lista
/**
 \brief Defionicao da fucnao que devolve a cauda da lista ligada
 * @param L Apontador da lista ligada
 * @return A cauda da lista ligada
 */
LISTA proximo(LISTA L);

// Remove a cabeça da lista (libertando o espaço ocupado) e devolve a cauda
/**
 \brief Definicao da funcao que remove a cabeda da lista ligada libertando assim o espaco ocupado pela mesma e devolve a cauda
 * @param L Apontador da lista ligada
 * @return A lista ligada sem a cabeca
 */
LISTA remove_cabeca(LISTA L);

// Devolve verdareiro se a lista é vazia
/**
 \brief Definicao da funcao que verifica de uma lista ligada esta vazia
 * @param L Apontador da lista ligada
 * @return Devolve 1 caso seja fazia e 0 caso contrario
 */
int lista_esta_vazia(LISTA L);

/**
 \brief Definicao da funcao que percorre as casas vizinhas e disponiveis a casa atual da peca branca e as guarda numa lista ligada
 * @param e Apontador do estado
 * @return A lista com as posicoes possiveis a serem jogadas
 */
LISTA posicoes_possiveis (ESTADO *e);

/**
 \brief Definicao da funcao que percorre uma lista ligada com as posicoes possiveis a serem jogadas e escolhe a posicao com a menor distancia a casa necessaria para o jogador atual ganhar
 * @param L A lista ligada com as posicoes possiveis
 * @param e Apontador do estado
 * @return A coordenada da casa mais proxima a casa necessaria para o jogador atual vencer
 */
COORDENADA *menor (LISTA L , ESTADO *e);


#endif //RASTROS_MODIFICALISTAS_H
