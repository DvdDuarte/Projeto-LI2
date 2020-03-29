//
// Created by david on 22/03/20.
//

#include <bits/types/FILE.h>
#include "estruturasDados.h"

/**
 @file lerEstado.h
 Definicao da/s funcao/os que le/m um ficheiro e imprime/m o estado
 */

#ifndef RASTROS_LERESTADO_H

#define RASTROS_LERESTADO_H
/**
 \brief Funcao principal para ler o estado atreves de um ficheiro
 * @param Jogo Apontador para o nome do ficheiro
 * @return O estado que estava no ficheiro
 */
ESTADO *ler (char *jogo);

/**
 \brief Definicao da funcao que ao receber um char de um casa vai decidir qual o tipo de peca que esta nessa casa
 * @param e Apontador do estado
 * @param letter caracter que esta a ser lido
 * @param coluna Coluna da casa
 * @param linha Linha da casa
 * @return O o estado com a casa no tabuleiro atualizada
 */
ESTADO *troca_tipo (ESTADO *e, char letter, int coluna, int linha);

/**
 \brief Definicao da funcao que le o tabuleiro de um ficheiro
 * @param jogo Apontador do nome do ficheiro
 * @param e Apontador do estado
 */
void ler_tabuleiro (char *jogo, ESTADO *e);

/**
 \brief Definicao da funcao que le a lista de movimentos de um ficheiro
 * @param jogo Apontador do nome do ficheiro
 * @param e Apontador do estado
 */
void ler_movimentos (char *jogo, ESTADO *e);

/**
 \brief Definicao da funcao que le uma linha de movimentos de um ficheiro
 * @param line A variavel onde a linha lida vai ser guardada
 * @param e Apontador do estado
 * @param indice indice da jogada
 */
void ler_linha_movs (char line[BUF_SIZE], ESTADO *e, int indice);


#endif //RASTROS_LERESTADO_H
