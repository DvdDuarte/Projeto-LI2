//
// Created by david on 29/03/20.
//

#include <stdio.h>
#include "listaMovs.h"
#include "modificaEstado.h"


void imprimeMovs (ESTADO *e, FILE *ficheiro) {

    int tamanhomovs, i, movimentoj1l, movimentoj2l;
    char movimentoj1c, movimentoj2c;
    JOGADA *movimentos;

    tamanhomovs = obter_numero_de_jogadas(e);

   //tamanhomovs = sizeof(movimentos)/ sizeof(movimentos[0]);


    for (i = 0; i < tamanhomovs; i++) {

        movimentoj1c = e->jogadas[i].jogador1.coluna;
        movimentoj1l = e->jogadas[i].jogador1.linha;
        movimentoj2c = e->jogadas[i].jogador2.coluna;
        movimentoj2l = e->jogadas[i].jogador2.linha;

        fprintf(ficheiro, "%d: %c%d %c%d", i, movimentoj1c, movimentoj1l, movimentoj2c, movimentoj2l);

    //completar a impressao da lista de movimentos que se encontra no array jogadas
        putchar('\n');
    }
}