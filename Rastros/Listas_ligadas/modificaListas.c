//
// Created by david on 15/04/20.
//

#include <stdlib.h>
#include "modificaListas.h"
#include "../Camadas_de_dados/VerificaJogada.h"
#include "../Camadas_de_dados/modificaEstado.h"


// Cria uma lista vazia
LISTA criar_lista(){

    return NULL;

}

// Insere um valor na cabeça da lista
LISTA insere_cabeca(LISTA L, void *valor){

    LISTA novo = malloc(sizeof(NODO));

    novo -> valor = valor;
    novo -> proximo = L;

    return novo;

}

// Devolve a cabeça da lista
COORDENADA *devolve_cabeca(LISTA L){

 return L -> valor;

}

// Devolve a cauda da lista
LISTA proximo(LISTA L){

    return L->proximo;

}

// Remove a cabeça da lista (libertando o espaço ocupado) e devolve a cauda
LISTA remove_cabeca(LISTA L){

    LISTA x = L == NULL ? NULL : L -> proximo;
    free(L);
    return x;

}

// Devolve verdareiro se a lista é vazia
int lista_esta_vazia(LISTA L){

    return (L == NULL);

}

LISTA posicoes_possiveis (ESTADO *e, VALIDACOES flag) {

    int coluna, linha, i, j;
    LISTA posicoes;
    CASA tipo_casa;

    if (flag == IMPOSSIVEL_JOGAR) tipo_casa = PRETA;
    else tipo_casa = VAZIO;

    coluna = e -> ultima_jogada.coluna;
    linha = e -> ultima_jogada.linha;

    posicoes = criar_lista();

        for (i = -1; i <= 1; i++) {
            for (j = -1; j <= 1; j++) {
                if (coluna + i >=0 && coluna + i < 8 && linha + j >= 0 && linha + j < 8 && e->tab[coluna + i][linha + j] == tipo_casa) {
                    COORDENADA *coord = malloc(sizeof(COORDENADA));
                    *coord = (COORDENADA) {coluna + i, linha + j};
                    posicoes = insere_cabeca(posicoes, coord);

                }

            }
        }

    return posicoes;
}


int length(LISTA L) {
    if(lista_esta_vazia(L)) return 0;
    else {
        //remove_cabeca(L);
        return (1 + length(L->proximo));
    }
}


COORDENADA *menor (LISTA L, ESTADO *e) {

    int distmenor, dist_comparar;
    COORDENADA *menor_elemento, *elemento_comparar;

    menor_elemento = (COORDENADA *) devolve_cabeca(L);

    distmenor = distancia(e, menor_elemento->coluna, menor_elemento->linha, obter_jogador_atual(e));

    L = remove_cabeca(L);

    for(LISTA T = L; !lista_esta_vazia(T); T = remove_cabeca(T)) {

        elemento_comparar = devolve_cabeca(T);

        dist_comparar = distancia(e, elemento_comparar->coluna, elemento_comparar->linha, obter_jogador_atual(e));

        if (distmenor > dist_comparar ) {

            distmenor = dist_comparar;
            menor_elemento = elemento_comparar;

        }
    }


    return menor_elemento;
}
