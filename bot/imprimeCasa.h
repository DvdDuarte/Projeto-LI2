//
// Created by oliveira on 13/03/20.
//

#include "estruturasDados.h"


/**
 @file imprimeCasa.h
 Definicao da funcao que imprime a casa com uma determinada coordenada
 */

#ifndef RASTROS_IMPRIMECASA_H
#define RASTROS_IMPRIMECASA_H

/**
 \brief Definicap da funcao que dado um estado a coordenada imprime a casa do tabuleiro
 * @param e Apontador do estado
 * @param i Numero da coluna da casa
 * @param j Numero da linha da casa
 * @param jogo Nome do ficheiro no qual se pretende imprimir a casa
 */
void imprimeCasa (ESTADO *e, int i, int j, FILE *jogo);

#endif //RASTROS_IMPRIMECASA_H
