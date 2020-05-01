//
// Created by david on 12/03/20.
//

#include "../Camadas_de_dados/estruturasDados.h"

/**
 @file interpretador.h
 Definicao da funcao que serve de interpretador dos comandos
 */
#ifndef RASTROS_INTERPRETADOR_H
#define RASTROS_INTERPRETADOR_H

/**
 \brief Funcao que interpreta os comandos ao longo do jogo
 * @param e Apontador do estado
 * @return 0 quando quiserem sair do jogo, ou quando o jogo acabar
 */
int interpretador (ESTADO *e);

#endif //RASTROS_INTERPRETADOR_H
