//
// Created by david on 20/03/20.
//

#ifndef RASTROS_GRAVA_H
#define RASTROS_GRAVA_H

/**
 @file grava.h
 Definicao da funcao que grava o estado do jogo num ficheiro
 */

#include "estruturasDados.h"

/**
 \brief Funcao que grava o estado do jogo num ficheiro
 * @param e Apontador do Estado
 * @param filename Nome do ficheiro
 * @return 0 quando e possivel gravar
 */
int gravar (ESTADO *e, char *filename);
#endif //RASTROS_GRAVA_H
