//

// Created by david on 20/03/20.
//

#include "estruturasDados.h"
#include "tipoErros.h"

#ifndef RASTROS_VERIFICAJOGADA_H
#define RASTROS_VERIFICAJOGADA_H
VALIDACOES jogadavalida (ESTADO *e, COORDENADA c);
void coloca_peca(ESTADO *e, int coluna, int linha);
float distancia(ESTADO *e, int coluna, int linha);
#endif //RASTROS_VERIFICAJOGADA_H
