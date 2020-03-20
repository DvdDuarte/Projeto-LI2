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
void mostrar_tabuleiro(ESTADO *e, FILE *ficheiro) {

    int linha, coluna, contalinhas;

    contalinhas = 8;

    for (linha = 0; contalinhas >= 0; linha++, contalinhas--) {

        if (linha < 8 && contalinhas > 0) {

            fputc(48 + contalinhas, ficheiro);
            fputc('|', ficheiro);
            fputc(' ', ficheiro);

            for (coluna = 0; coluna < 8; coluna++) {

                if (linha == 0 && coluna == 7) fputc('2', ficheiro);
                else if (linha == 7 && coluna == 0) {
                    fputc('1', ficheiro);
                    fputc(' ', ficheiro);
                } else {
                    imprimeCasa(e, coluna - 96, 8-linha, ficheiro);
                }
            }
            fputc('\n', ficheiro);

        } else {
            for (int col = 3; col > 0; col--) {
                if (col > 2) {
                    for (int i = 0; i < 18; i++) {
                        if (i < 3) fputc(' ', ficheiro);
                        else fputc('-', ficheiro);
                    }
                    fputc('\n', ficheiro);
                } else if (col > 1) {
                    for (int i = 0; i < 3; i++) {
                        fputc(' ', ficheiro);
                    }
                    for (int j = 0; j < 8; j++) {
                        fputc('a' + j, ficheiro);
                        fputc(' ', ficheiro);
                    }
                }
            }
        }
    }
}





void mostrar_prompt(ESTADO *e, FILE *ficheiro) {
    int i, j, soma;

    mostrar_tabuleiro(e, ficheiro);
    fputc ('\n', ficheiro);

    for (i = 0; e->jogadas[i].jogador1.coluna != 0; i++);
    for (j = 0; e->jogadas[j].jogador2.coluna != 0; i++);

    soma = i + j + 1;
    fprintf(ficheiro,"# %d PL%d (%d) > ", soma, e->jogador_atual, e->num_jogadas);
}