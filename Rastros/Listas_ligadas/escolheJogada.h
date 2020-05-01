//
// Created by david on 19/04/20.
//

/**
 @file escolheJogada.h
 Definicao das funcoes que jogam pelo jogador
 */

#ifndef RASTROS_ESCOLHEJOGADA_H
#define RASTROS_ESCOLHEJOGADA_H

#include "../Camadas_de_dados/estruturasDados.h"

/**
 \brief Definicao a funcao que joga pelo jogador atraves da aleatoridade das casas vizinha que estejam disponiveis, comando jog
 * @param e Apontador do estado
 */
void jogar_automaticamente (ESTADO *e);

/**
 \brief Definicao a funcao que joga pelo jogador atraves da menor distancia a casa necessaria para o jogador atual ganhar, comando jog2
 * @param e Apontador do estado
 */
void joga_sozinho (ESTADO *e);

#endif //RASTROS_ESCOLHEJOGADA_H
