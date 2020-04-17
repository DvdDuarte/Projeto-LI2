//
// Created by david on 01/04/20.
//

#include "buscaPosicao.h"
#include "modificaEstado.h"


ESTADO *posicao (int pos, ESTADO *e) {

    ESTADO *estadonovo;
    int i;
    pos = pos - 1;

    if (pos < 0 || pos >= e->num_jogadas) return e;

    inicializar_estado(estadonovo);

    for (i = 0; i <= pos; i++){

        estadonovo -> jogadas[i] = e -> jogadas[i];

    }

    //Fazer condicao para ver qual foi o ultimo jogador para atualizar a ultima jogada em concordancia
    //estadonovo -> ultima_jogada.coluna = e -> jogadas.jogador1.coluna;
   // estadonovo -> ultima_jogada.linha = e -> jogadas.jogador1.linha;
    estadonovo -> ultima_jogada.coluna = e -> jogadas -> jogador2.coluna;
    estadonovo -> ultima_jogada.linha = e -> jogadas -> jogador2.linha;

    return estadonovo;

}