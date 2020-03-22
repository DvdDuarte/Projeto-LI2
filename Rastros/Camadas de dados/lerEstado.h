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
ESTADO ler (FILE *jogo);
#endif //RASTROS_LERESTADO_H
