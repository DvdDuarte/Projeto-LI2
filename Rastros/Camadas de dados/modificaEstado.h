//
// Created by david on 12/03/20.
//
#include "estruturasDados.h"

#ifndef RASTROS_INICIALIZADOR_H
#define RASTROS_INICIALIZADOR_H
ESTADO *inicializar_estado();
int obter_jogador_atual(ESTADO *estado);
int obter_numero_de_jogadas(ESTADO *estado);
CASA obter_estado_casa(ESTADO *e, COORDENADA c);
#endif //RASTROS_INICIALIZADOR_H
