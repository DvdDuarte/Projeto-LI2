//

// Created by david on 20/03/20.
//

#include "estruturasDados.h"
#include "tipoErros.h"
/**
 @file VerificaJogada.h
 Definicao das funoes que validam uma jogada e a concretiza, se for possivel
 */
#ifndef RASTROS_VERIFICAJOGADA_H
#define RASTROS_VERIFICAJOGADA_H

/**
 \brief Valida uma jogada
 * @param e Apontador para o estado
 * @param c A coordenada a verificar
 * @return A validacao da jogada
 */
VALIDACOES jogadavalida (ESTADO *e, COORDENADA c);

/**
 \brief Coloca a peca na coordenada desejada e coloca a peca preta na casa onde estava
 * @param e Apontador para o estado
 * @param coluna A coluna da casa nova
 * @param linha A linha da casa nova
 */
void coloca_peca(ESTADO *e, int coluna, int linha);

/**
 \brief Calcula a distancia entre a casa nova e a casa atual para saber se sao vizinhas
 * @param e Apontador para o estado
 * @param coluna A coluna da casa nova
 * @param linha A linha da casa nova
 * @return A distancia para a funcao que valida a jogada
 */
float distancia(ESTADO *e, int coluna, int linha);
#endif //RASTROS_VERIFICAJOGADA_H
