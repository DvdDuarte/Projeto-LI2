//
// Created by david on 01/04/20.
//

#include "buscaPosicao.h"
#include "modificaEstado.h"
#include "../Lógica do programa/jogar.h"


ESTADO *posicao (int pos, ESTADO *e) {


    int i;
    COORDENADA coord1, coord2;

    if (pos < 0 || pos >= e->num_jogadas) return e;

    inicializar_tab(e);

    for (i = 0; i <= pos; i++) {

        coord1 = (COORDENADA) {e -> jogadas[i].jogador1.coluna, e -> jogadas[i].jogador1.linha};
        coord2 = (COORDENADA) {e -> jogadas[i].jogador2.coluna, e -> jogadas[i].jogador2.linha};
        jog_pos (e, coord1, i);
        jog_pos (e, coord2, i);
    }


    //Fazer condicao para ver qual foi o ultimo jogador para atualizar a ultima jogada em concordancia
    //estadonovo -> ultima_jogada.coluna = e -> jogadas.jogador1.coluna;
   // estadonovo -> ultima_jogada.linha = e -> jogadas.jogador1.linha;
    e -> ultima_jogada.coluna = e -> jogadas[i].jogador2.coluna;
    e -> ultima_jogada.linha = e -> jogadas[i].jogador2.linha;

    return e;

}