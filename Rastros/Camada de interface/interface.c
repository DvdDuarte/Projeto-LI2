//
// Created by oliveira on 13/03/20.
//

#include "interface.h"
#include "../Camadas de dados/estruturasDados.h"
#include "imprimeCasa.h"
#include "../Camadas de dados/modificaEstado.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Funcao que deve ser completada e colocada na camada de interface
// Funcao que devera imprimir o tabuleiro
void mostrar_tabuleiro(ESTADO *e, FILE *ficheiro) {


    int linha, coluna, contalinhas;

    contalinhas = 8;


    if (ficheiro == NULL) ficheiro = stdout;

    for (coluna = 0; contalinhas >= 0; coluna++, contalinhas--) {

        if (coluna < 8 && contalinhas > 0) {

            fputc(48 + contalinhas, ficheiro);
            fputc('|', ficheiro);
            fputc(' ', ficheiro);

            for (linha = 0; linha <= 7; linha++) {

                imprimeCasa(e, linha, coluna, ficheiro);

            }
            fputc('\n', ficheiro);

        } else {

            for (int col = 3; col > 1; col--) {
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

    if (ficheiro != stdout) {
        mostrar_movimentos (e, ficheiro);
    }

}


void mostrar_prompt(ESTADO *e, FILE *ficheiro) {
    int i, j, soma;

    mostrar_tabuleiro(e, ficheiro);
    fputc('\n', ficheiro);

    for (i = 0; e->jogadas[i].jogador1.coluna != 0; i++);
    for (j = 0; e->jogadas[j].jogador2.coluna != 0; i++);

    soma = i + j + 1;
    fprintf(ficheiro, "# %d PL%d (%d) > ", soma, e->jogador_atual, e->num_jogadas);
}

void mostrar_movimentos (ESTADO *e, FILE *ficheiro){


    int tamanhomovs, i, movimentoj1l, movimentoj2l;
    char movimentoj1c, movimentoj2c;
    JOGADA *movimentos;

    tamanhomovs = obter_numero_de_jogadas(e);

    //tamanhomovs = sizeof(movimentos)/ sizeof(movimentos[0]);


    for (i = 0; i < tamanhomovs; i++) {

        movimentoj1c = e -> jogadas[i].jogador1.coluna;
        movimentoj1l = e -> jogadas[i].jogador1.linha;
        movimentoj2c = e -> jogadas[i].jogador2.coluna;
        movimentoj2l = e -> jogadas[i].jogador2.linha;

        fprintf(ficheiro, "%d: %c%d %c%d", i, movimentoj1c, movimentoj1l, movimentoj2c, movimentoj2l);

        //completar a impressao da lista de movimentos que se encontra no array jogadas
        putchar('\n');
    }

}