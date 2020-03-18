//
// Created by oliveira on 13/03/20.
//

#include "interface.h"
#include "../Camadas de dados/estruturasDados.h"
#include "imprimeCasa.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Funcao que deve ser completada e colocada na camada de interface
// Funcao que devera imprimir o tabuleiro
void mostrar_tabuleiro(ESTADO *e) {

    int linha, coluna;

    for (linha = 0; linha < 8; linha++) {
        for (coluna = 0; coluna < 8; coluna++) {
            if (linha == 0 && coluna == 7) putchar ('2');
            else if (linha == 7 && coluna == 0) putchar ('1');
            else imprimeCasa (e, linha, coluna);
        }
        putchar ('\n');
    }

}
