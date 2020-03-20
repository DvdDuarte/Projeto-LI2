//
// Created by david on 12/03/20.
//
#include <bits/types/FILE.h>
#include "../Camadas de dados/estruturasDados.h"
#ifndef RASTROS_JOGAR_H
#define RASTROS_JOGAR_H
int jogar(ESTADO *e, COORDENADA c, FILE *jogo);
void coloca_peca (ESTADO *e, int coluna, int linha);
#endif //RASTROS_JOGAR_H
