//
// Created by david on 22/03/20.
//

#include <stdio.h>
#include "lerEstado.h"
#include "modificaEstado.h"

ESTADO ler(FILE *jogo) {

    FILE *ficheiro;
    ESTADO *e;
    char letter;
    int linha, coluna;

    e = inicializar_estado(e);

    ficheiro = fopen("file.txt", "r");

    for (coluna = 7; !(feof(ficheiro)); coluna--) {

        if (coluna >= 0) {

            for (linha = 0; linha < 8; linha++) {

                letter = fgetc(ficheiro);

                troca_tipo(e, letter, coluna, linha);

            }

        }

        letter = fgetc(ficheiro);
        //Adicionar a informacao dos movimentos (jogadas) ao estado

    }

    fclose(ficheiro);

    return e;
}

ESTADO troca_tipo (ESTADO *e, char letter, int coluna, int linha) {

    switch (letter) {

        case '1':
            e -> tab[coluna][linha] = UM;
            break;

        case '2':
            e -> tab[coluna][linha] = DOIS;
            break;

        case '*':
            e -> tab[coluna][linha] = PRETA;
            break;

        case '#':
            e -> tab[coluna][linha] = BRANCA;
            break;

        default:
            e -> tab[coluna][linha] = VAZIO;

    }

    return *e;

}