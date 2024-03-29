//
// Created by david on 12/03/20.
//
#include <bits/types/FILE.h>
#include "estruturasDados.h"

/**
 @file jogar.h
 Definicao da funcao que permite a um jogador escolher a casa na qual pretende jogar
 */
#ifndef RASTROS_JOGAR_H
#define RASTROS_JOGAR_H

/**
 \brief Definicao da funcao que vai chamar a funcao que atualiza o estado e a de imprimir o tabuleiro para se ver as mudancas jogadas
 * @param e Apontador do estado
 * @param c Coordenada da casa a jogar
 * @return 0 quando e feita a jogada
 */
int jogar(ESTADO *e, COORDENADA c);

/**
 \brief Funcao que e' utilizada para colocar as pecas quando dado o comando pos
 * @param e Apontador do estado
 * @param c Apontador da coordenada
 * @param i Indice da jogada
 */
void jog_pos (ESTADO *e, COORDENADA c, int i);

#endif //RASTROS_JOGAR_H
