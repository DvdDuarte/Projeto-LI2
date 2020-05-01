//
// Created by david on 22/03/20.
//

#include <stdio.h>
#include <string.h>
#include "lerEstado.h"
#include "modificaEstado.h"

ESTADO *ler(char *jogo) {

    FILE *ficheiro;
    ESTADO *e;
    char letter, line[BUF_SIZE];
    int linha, coluna;

    e = inicializar_estado(e);
    ficheiro = fopen(jogo, "r");

    ler_tabuleiro(ficheiro, e);

    fgets(line, BUF_SIZE, ficheiro);

    ler_movimentos(ficheiro, e);

    fclose(ficheiro);

    return e;
}

ESTADO *troca_tipo (ESTADO *e, char letter, int coluna, int linha) {


    e -> tab[linha][coluna] = letter;

    return e;

}

void ler_tabuleiro (FILE *ficheiro, ESTADO *e) {

    int coluna, linha;
    char line[BUF_SIZE];

    for (coluna = 0; coluna < 8; coluna++) {

        fgets(line, BUF_SIZE, ficheiro);

        if (coluna >= 0) {

            for (linha = 0; linha < 8; linha++) {

                troca_tipo(e, line[linha], coluna, linha);

            }

        }

    }


}

void ler_movimentos (FILE *ficheiro, ESTADO *e){

    int indice, jogador;
    char line[BUF_SIZE];

    for (indice = 0; !(feof(ficheiro)); indice++) {

        if (fgets(line, BUF_SIZE, ficheiro) != NULL)
            ler_linha_movs (line, e, indice);

    }

    e->num_jogadas = indice;


}

void ler_linha_movs (char line[BUF_SIZE], ESTADO *e, int indice) {

    int idx, indicejog, tamanho_linha;
    char letter, cj1, lj1, cj2, lj2;

    tamanho_linha = strlen(line);

    for (idx = 0; idx <= tamanho_linha/*8*/; idx++) {

        letter = line[idx];
        if (tamanho_linha < 10) {
            if (idx == 4) cj1 = letter;
            if (idx == 5) lj1 = letter;
            if (idx == 7) cj2 = letter;
            if (idx == 8) lj2 = letter;
        } else {
            if (idx == 5) cj1 = letter;
            if (idx == 6) lj1 = letter;
            if (idx == 8) cj2 = letter;
            if (idx == 9) lj2 = letter;
        }

    }


    if (tamanho_linha > 8) {
        e->ultima_jogada.coluna = cj2 - 'a';
        e->ultima_jogada.linha = '8' - lj2;

        e -> jogadas[indice] = (JOGADA) { {cj1 - 'a', '8' - lj1}, {cj2 - 'a', '8' - lj2}};

        e -> jogador_atual = 1;

    } else {
        e->ultima_jogada.coluna = cj1 - 'a';
        e->ultima_jogada.linha = '8' - lj1;

        e -> jogadas[indice] = (JOGADA) { {cj1 - 'a', '8' - lj1}, {-1, -1}};

        e -> jogador_atual = 2;
    }
    e -> posicao_jogada = indice;

}


















