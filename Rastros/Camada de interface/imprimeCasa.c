//
// Created by oliveira on 13/03/20.
//

#include <stdio.h>
#include "imprimeCasa.h"

void imprimeCasa (ESTADO *e, int coluna, int linha) {

    CASA peca;


    peca = e -> tab[coluna][linha];

    switch (peca)
    {
    case BRANCA:
        putchar ('*');
        putchar (' ');
    break;

    case PRETA:
        putchar ('#');
        putchar (' ');
    break;

    default:
        putchar ('.');
        putchar (' ');
    }
}
