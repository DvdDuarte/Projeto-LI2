//
// Created by oliveira on 13/03/20.
//

#include <stdio.h>
#include "imprimeCasa.h"

void imprimeCasa (ESTADO *e, int coluna, int linha, FILE *jogo) {

    CASA peca;


    peca = e -> tab[coluna][linha];

    fputc (peca, jogo);

    if (jogo == stdout) fputc (' ', jogo);

}
