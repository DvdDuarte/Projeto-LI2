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

    int i, j;

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if (i == 0 && j == 7) putchar ('2');
            else if (i == 7 && j == 0) putchar ('1');
            else imprimeCasa (e, i, j);
        }
        putchar ('\n');
    }

}
