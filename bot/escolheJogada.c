//
// Created by david on 19/04/20.
//
#include <stdlib.h>
#include "escolheJogada.h"
#include "dadosListas.h"
#include "modificaListas.h"
#include "jogar.h"


void jogar_automaticamente (ESTADO *e) {

    LISTA posicoes;
    COORDENADA *coordenada_final;

    posicoes = posicoes_possiveis (e);

    coordenada_final = devolve_cabeca (posicoes);

    free (posicoes);

    jogar (e, *coordenada_final);


}

void joga_sozinho (ESTADO *e) {

    LISTA posicoes;
    COORDENADA *coordenada_final;

    posicoes = posicoes_possiveis (e);

    coordenada_final = menor (posicoes, e);

    jogar (e, *coordenada_final);

}