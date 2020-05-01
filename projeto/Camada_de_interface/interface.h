//
// Created by oliveira on 13/03/20.
//
#include <bits/types/FILE.h>
#include "../Camadas_de_dados/estruturasDados.h"

/**
 @file interface.h
 Definicao das funcoes principais que vao criar a interface do jogo
 */

#ifndef RASTROS_INTERFACE_H
#define RASTROS_INTERFACE_H

/**
 \brief Definicao da funcao que imprime o tabuleiro de acordo com o estado e as coordenadas lateralmente para ajudar os jogadores
 * @param e Apontador do estado
 * @param ficheiro Nome do ficheiro para o qual se imprime o tabuleiro
 */
void mostrar_tabuleiro(ESTADO *e, FILE *ficheiro);

/**
 \brief Definicao da funcao que cria a prompt, com o numero do jogador atual, da jogada e o numero dos movimentos feitos
 * @param e Apontador do estado
 * @param ficheiro Nome do ficheiro no qual se pretende mostrar a prompt
 */
void mostrar_prompt(ESTADO *e, FILE *ficheiro);

/**
 \brief Definicao da funcao que imprime a lista de movimentos do jogo de acordo com o estado
 * @param e Apontador do estado
 * @param ficheiro Nome do ficheiro para o qual se imprime a lista
 */
void mostrar_movimentos (ESTADO *e, FILE *ficheiro);

#endif //RASTROS_INTERFACE_H
