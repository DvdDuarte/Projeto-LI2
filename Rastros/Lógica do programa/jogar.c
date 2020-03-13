//
// Created by david on 12/03/20.
//

#include "jogar.h"
#include "../Camadas de dados/estruturasDados.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Funcao que deve ser completada e colocada na camada logica do programa

// Esta funcao devera receber o estado atual e uma coordenada e modificar o estado ao jogar na casa correta se a jogada for válida.
// A função devolve verdadeiro(valor diferente de zero) se for possível jogar e falso(zero) caso não seja possível.
int jogar(ESTADO *e, COORDENADA c) {

    coloca_peça (e.tab, c.coluna, c.linha);

    printf("jogar %d %d\n", c.coluna, c.linha);
    return 1;

}
// Função auxiliar que coloca a peça branca na coordenada onde se pretende jogar.
void coloca_peça (CASA tab[8] [8], int coluna, int linha){
    tab[coluna] [linha] = BRANCA;
}