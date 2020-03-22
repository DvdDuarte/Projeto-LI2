//
// Created by david on 12/03/20.
//

/**
 @file estruturasDados.h
 Definicao dos estados principais para o jogo
 */

#ifndef RASTROS_ESTRUTURASDADOS_H
#define RASTROS_ESTRUTURASDADOS_H

/**
 \brief Tipo de dados para as casas do tabuleiro
 */
typedef enum {VAZIO, BRANCA, PRETA, UM, DOIS} CASA;

/**
 \brief Tipo de dados que constituem uma coordenada (constituida pela coluna e linha)
 */
typedef struct {
    int coluna;
    int linha;
} COORDENADA;

/**
 \brief Tipo de daodos que constituem uma jogada (constituida pelas coordenadas do jogador 1 e do jogador 2)
 */
typedef struct {
    COORDENADA jogador1;
    COORDENADA jogador2;
} JOGADA;

/**
 \brief Tipo de dados para as jogadas
 */
typedef JOGADA JOGADAS[32];

/**
 \brief Tipo de dados para o estado do jogo
 */
typedef struct {
    CASA tab[8][8];
    COORDENADA ultima_jogada;
    JOGADAS jogadas;
    int num_jogadas;
    int jogador_atual;
} ESTADO;
#endif //RASTROS_ESTRUTURASDADOS_H
