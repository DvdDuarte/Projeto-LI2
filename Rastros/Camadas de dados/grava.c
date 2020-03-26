//
// Created by david on 20/03/20.
//

#include <bits/types/FILE.h>
#include <stdio.h>
#include <stdlib.h>
#include "grava.h"
#include "../Camada de interface/interface.h"


int gravar (ESTADO *e, char *filename) {

    FILE *jogo;

    jogo = fopen(filename,"w");

    if (jogo == NULL) return 0;

    mostrar_tabuleiro(e,jogo);
    fputc('\n',jogo);
    mostrar_movimentos(e,jogo);

    return 1;

}