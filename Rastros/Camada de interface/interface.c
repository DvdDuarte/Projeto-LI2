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

    int linha, coluna, contalinhas;

    contalinhas = 8;

    for (linha = 0; contalinhas >= 0; linha++, contalinhas--) {

        if (linha < 8 && contalinhas > 0) {

            putchar(48 + contalinhas);
            putchar('|');
            putchar(' ');

            for (coluna = 0; coluna < 8; coluna++) {

                if (linha == 0 && coluna == 7) putchar('2');
                else if (linha == 7 && coluna == 0) {
                    putchar('1');
                    putchar(' ');
                } else {
                    imprimeCasa(e, 9-coluna, 8-linha);
                }
            }
            putchar('\n');

        } else {
            for (int col = 3; col > 0; col--) {
                if (col > 2) {
                    for (int i = 0; i < 18; i++) {
                        if (i < 3) putchar(' ');
                        else putchar('-');
                    }
                    putchar('\n');
                } else if (col > 1) {
                    for (int i = 0; i < 3; i++) {
                        putchar(' ');
                    }
                    for (int j = 0; j < 8; j++) {
                        putchar('a' + j);
                        putchar(' ');
                    }
                }
            }
        }
    }
}





void mostrar_prompt(ESTADO *e) {
    int i, j, soma;
    for (i = 0; e->jogadas[i].jogador1.coluna != 0; i++);
    for (j = 0; e->jogadas[j].jogador2.coluna != 0; i++);

    soma = i + j + 1;
    printf("# %d PL%d (%d)", soma, e->jogador_atual, e->num_jogadas);
}