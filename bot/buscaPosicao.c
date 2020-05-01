//
// Created by david on 01/04/20.
//

#include "buscaPosicao.h"
#include "modificaEstado.h"
#include "jogar.h"


ESTADO *posicao (int pos, ESTADO *e) {


    int i;
    COORDENADA coord1, coord2;

    if (pos < 0 || pos >= e->num_jogadas) return e;

    inicializar_tab(e);
    inicializar_ultima_jogada(e);

    for (i = 0; i <= pos; i++) {

        coord1 = (COORDENADA) {e -> jogadas[i].jogador1.coluna, e -> jogadas[i].jogador1.linha};
        coord2 = (COORDENADA) {e -> jogadas[i].jogador2.coluna, e -> jogadas[i].jogador2.linha};
        jog_pos (e, coord1, i);
        e -> ultima_jogada = coord1;
        jog_pos (e, coord2, i);
        e -> ultima_jogada = coord2;
    }

    e -> posicao_jogada = pos;


    return e;

}