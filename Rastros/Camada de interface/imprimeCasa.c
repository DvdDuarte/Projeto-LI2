//
// Created by oliveira on 13/03/20.
//

#include <stdio.h>
#include "imprimeCasa.h"

void imprimeCasa (ESTADO *e, int coluna, int linha, FILE *jogo) {

    CASA peca;


    peca = e -> tab[coluna][linha];

    switch (peca)
    {
    case BRANCA:
        fputc ('*', jogo);
        fputc (' ', jogo);
    break;

    case PRETA:
        fputc ('#', jogo);
        fputc (' ', jogo);
    break;
    /*
    case UM:
        fputc ('1', jogo);
        fputc (' ', jogo);
        break;
    case DOIS:
        fputc ('2', jogo);
        fputc (' ', jogo);
        break;
        */


    default:
        fputc ('.', jogo);
        fputc (' ', jogo);
    }
}
