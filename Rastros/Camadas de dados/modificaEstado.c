//
// Created by david on 12/03/20.
//

#include "modificaEstado.h"
#include "estruturasDados.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Funcao que deve ser completada e colocada na camada de dados
ESTADO *inicializar_estado() {
    ESTADO *e = (ESTADO *) malloc(sizeof(ESTADO));
    e -> jogador_atual = 1;
    e -> num_jogadas = 0;
    //Falta o resto da inicializacao
    return e;
}
int obter_jogador_atual(ESTADO *estado){

}

int obter_numero_de_jogadas(ESTADO *estado){

}

CASA obter_estado_casa(ESTADO *e, COORDENADA c){

}
