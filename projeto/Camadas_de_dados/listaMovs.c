//
// Created by david on 29/03/20.
//

#include <stdio.h>
#include "listaMovs.h"
#include "modificaEstado.h"


void imprimeMovs (ESTADO *e, FILE *ficheiro) {

    int tamanhomovs, i, movimentoj1l, movimentoj2l;
    char movimentoj1c, movimentoj2c;

    tamanhomovs = obter_numero_de_jogadas(e);
    if (tamanhomovs != 1)
        tamanhomovs = tamanhomovs - 1;

   //tamanhomovs = sizeof(movimentos)/ sizeof(movimentos[0]);


    for (i = 0; i < tamanhomovs; i++) {

        if (e->jogadas[i].jogador2.coluna != -1 && e->jogadas[i].jogador2.linha != -1) {
            movimentoj1c = e->jogadas[i].jogador1.coluna + 'a';
            movimentoj1l = 8 - e->jogadas[i].jogador1.linha;
            movimentoj2c = e->jogadas[i].jogador2.coluna + 'a';
            movimentoj2l = 8 - e->jogadas[i].jogador2.linha;

            fprintf(ficheiro, "0%d: %c%d %c%d", i + 1, movimentoj1c, movimentoj1l, movimentoj2c, movimentoj2l);
        } else {
            movimentoj1c = e->jogadas[i].jogador1.coluna + 'a';
            movimentoj1l = 8 - e->jogadas[i].jogador1.linha;
            fprintf(ficheiro, "0%d: %c%d", i + 1, movimentoj1c, movimentoj1l);

        }


    //completar a impressao da lista de movimentos que se encontra no array jogadas
        fprintf(ficheiro, "\n");
    }

}