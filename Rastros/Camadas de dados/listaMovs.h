//
// Created by david on 29/03/20.
//

/**
 @file listaMovs.h
 Definicao da(s) funcao(oes) que imprime(m) a lista de movimentos feitos
 */

#include <bits/types/FILE.h>
#include "estruturasDados.h"

#ifndef RASTROS_LISTAMOVS_H
#define RASTROS_LISTAMOVS_H

/**
 \brief Definicao que vai ao estado e imprime a lista de movimentos
 * @param e Apontador do estado
 * @param ficheiro Apontador do nome do ficheiro
 */
void imprimeMovs (ESTADO *e, FILE *ficheiro);

#endif //RASTROS_LISTAMOVS_H
