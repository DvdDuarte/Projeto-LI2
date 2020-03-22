//
// Created by david on 12/03/20.
//
#include "estruturasDados.h"

/**
 @file modificaEstado.h
 Definicao das funcoes que modificam o estado
 */
#ifndef RASTROS_INICIALIZADOR_H
#define RASTROS_INICIALIZADOR_H
/**
 \brief Funcao que inicializa o estado do jogo
 * @return O estado inicializado
 */
ESTADO *inicializar_estado();

/**
 \brief Funcao que obtem o jogador atual
 * @param estado Apontador do estado
 * @return O numero do jogador atual
 */
int obter_jogador_atual(ESTADO *estado);

/**
 \brief Funcao que obtem o numero das jogadas feitas
 * @param estado Apontador do estado
 * @return O numero de jogadas feitas
 */
int obter_numero_de_jogadas(ESTADO *estado);

/**
 \brief Funcao que obtem o estado de uma casa
 * @param e Apontador do estado
 * @param c A coordenada da casa
 * @return O estado da casa
 */
CASA obter_estado_casa(ESTADO *e, COORDENADA c);
#endif //RASTROS_INICIALIZADOR_H
