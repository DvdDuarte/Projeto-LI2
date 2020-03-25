//
// Created by david on 22/03/20.
//

#include <stdio.h>
#include "lerEstado.h"

ESTADO ler (FILE *jogo){

    FILE *ficheiro;
    ESTADO *e;
    char tabuleiro[8][8], linha[16];

    ficheiro = fopen(jogo,"r");

    for (int i = 0; i < 8; i++) {

        fscanf(ficheiro, "%s\n", linha);

        for (int j = 0; j < 8; j++) {

            if (j == 0)
                tabuleiro[i][j] = linha[j];
            else
                tabuleiro[i][j] = linha[j + 1];


        }

    }




    return *e;
}