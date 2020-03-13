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
    ESTADO *e = (ESTADO *) malloc(sizeof(ESTADO));
    e -> jogador_atual = 1;
    e -> num_jogadas = 0;
    //Falta o resto da inicializacao
    return e;
}

// Esta funcao permite obter o numero do jogador atual
int obter_jogador_atual(ESTADO *estado){

}

// Esta funcao permite obter o estado atual da casa
int obter_numero_de_jogadas(ESTADO *estado){

}

// Esta funcao permite obter quantas jogadas foram efetuadas (cada jogada tem o movimento de 2 jogadores)
CASA obter_estado_casa(ESTADO *e, COORDENADA c){

}
