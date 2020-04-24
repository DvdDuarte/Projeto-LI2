//
// Created by david on 19/04/20.
//
#include <stdlib.h>
#include "escolheJogada.h"
#include "dadosListas.h"
#include "modificaListas.h"
#include "../Lógica do programa/jogar.h"


void jogar_automaticamente (ESTADO *e) {

    LISTA posicoes;
    COORDENADA coordenada_final;

    posicoes = posicoes_possiveis (e);

    coordenada_final = *devolve_cabeca (posicoes);

    free (posicoes);

    jogar (e, coordenada_final);


}

void joga_sozinho (ESTADO *e) {

    int tamanho, i;
    LISTA posicoes;
    COORDENADA coordenada_final;

    posicoes = posicoes_possiveis (e);

    tamanho = tamanho_lista(posicoes);
    for (i = 0; i < tamanho; i++) {
        posicoes = ordena_lista_posicoes(posicoes, e);
    }

}