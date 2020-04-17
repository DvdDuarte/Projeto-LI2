//
// Created by david on 01/04/20.
//

/**
 @file buscaPosicao.h
 Definicao da(s) funcao(oes) que vai(o) a uma determinada jogada e retoma(m) o jogo a partir da mesma
 */

#include "estruturasDados.h"

#ifndef RASTROS_BUSCAPOSICAO_H
#define RASTROS_BUSCAPOSICAO_H

/**
 \brief Definicao da funcao que vai a posicao indicada para retomar o jogo a partir da mesma
 * @param pos A posicao pretendida
 * @param e Apontador do estado
 * @return O restado a partir dessa posicao
 */
ESTADO *posicao (int pos, ESTADO *e);

#endif //RASTROS_BUSCAPOSICAO_H
