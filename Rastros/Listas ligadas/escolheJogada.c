//
// Created by david on 19/04/20.
//

#include "escolheJogada.h"
#include "dadosListas.h"
#include "modificaListas.h"
#include "../Lógica do programa/jogar.h"


void jogar_bot (ESTADO *e) {

    int coluna, linha, i, j;
    LISTA posicoes_possiveis;
    COORDENADA *coord, coordenada_final;

    coluna = e -> ultima_jogada.coluna;
    linha = e -> ultima_jogada.linha;

    posicoes_possiveis = criar_lista();

    for (i = -1; i <= 1; i++) {
        for (j = -1; j<= 1; j++) {
            if (e->tab[coluna + i][linha + j] == VAZIO) {
                *coord = (COORDENADA) {coluna + i, linha + j};
                posicoes_possiveis = acrescenta_elementos(posicoes_possiveis, coord);
            }

        }
    }

    coordenada_final = *devolve_cabeca (posicoes_possiveis);

    jogar (e, coordenada_final);

   // return *e;
}