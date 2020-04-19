//
// Created by david on 12/03/20.
//

#include "modificaEstado.h"
#include "estruturasDados.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Funcao que deve ser completada e colocada na camada de dados
// Esta funcao devera criar um estado vazio (com o tabuleiro inicializado)
ESTADO *inicializar_estado() {
    int i, j;

    ESTADO *e = (ESTADO *) malloc(sizeof(ESTADO));

    //Inicializar o jogador
    e -> jogador_atual = 1;

    //Inicializar o numero das jogadas feitas
    e -> num_jogadas = 0;

    //Inicializar a ultima jogada
    e -> ultima_jogada.coluna = 4;
    e -> ultima_jogada.linha = 3;

    inicializar_tab(e);


    //Inicializar as jogadas
    for (i = 0; i < 32 ; i++) {
        e->jogadas[i].jogador1.coluna = 0;
        e->jogadas[i].jogador1.linha = 0;
        e->jogadas[i].jogador2.coluna = 0;
        e->jogadas[i].jogador2.linha = 0;
    }

    return e;
}

ESTADO *inicializar_tab (ESTADO *e) {
//Inicializar o tabuleiro
    int i, j;

    for (i = 0;i < 8; i++) {
        for (j = 0;j < 8; j++) e -> tab[i][j] =VAZIO;
    }

    e -> tab[4][3] =BRANCA;
    e -> tab[0][7] =UM;
    e -> tab[7][0] =DOIS;

    return e;
}

// Esta funcao permite obter o numero do jogador atual
int obter_jogador_atual(ESTADO *estado){
return estado -> jogador_atual;
}


// Esta funcao permite obter quantas jogadas foram efetuadas (cada jogada tem o movimento de 2 jogadores)
int obter_numero_de_jogadas(ESTADO *estado){
return estado -> num_jogadas;
}

// Esta funcao permite obter o estado atual da casa
CASA obter_estado_casa(ESTADO *e, COORDENADA c){
return e -> tab[c.coluna][c.linha]; 
}

