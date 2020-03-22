//
// Created by david on 13/03/20.
//

#include "../Camadas de dados/estruturasDados.h"

/**
 @file transformaBranca.h
 Definicao da funcao que transforma a peca branca numa peca preta
 */
#ifndef RASTROS_TRANSFORMABRANCA_H
#define RASTROS_TRANSFORMABRANCA_H

/**
 \brief Definicao da funcao que transforma a casa com a peca branca numa casa com a peca preta
 * @param e Apontador do estado
 * @return O estado com as pecas atualizadas;
 */
ESTADO *transformaBrancaPreta (ESTADO *e);
#endif //RASTROS_TRANSFORMABRANCA_H
