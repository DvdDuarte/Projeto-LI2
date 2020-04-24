//
// Created by david on 15/04/20.
//

#include <stdlib.h>
#include "modificaListas.h"
#include "../Camadas de dados/VerificaJogada.h"
#include "../Camadas de dados/modificaEstado.h"


// Cria uma lista vazia
LISTA criar_lista(){

    LISTA list = malloc(sizeof(NODO));

    list -> valor = NULL;
    list -> proximo = NULL;

    return list;

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

    if (L -> valor == NULL) return 1;
    else return 0;

}

LISTA posicoes_possiveis (ESTADO *e) {

    int coluna, linha, i, j;
    LISTA posicoes;
    COORDENADA *coord = malloc(sizeof(COORDENADA));

    coluna = e -> ultima_jogada.coluna;
    linha = e -> ultima_jogada.linha;

    posicoes = criar_lista();

    for (i = -1; i <= 1; i++) {
        for (j = -1; j <= 1; j++) {
            if (e->tab[coluna + i][linha + j] == VAZIO) {

                *coord = (COORDENADA) {coluna + i, linha + j};
                posicoes = insere_cabeca(posicoes, coord);

            }

        }
    }

    return posicoes;
}

LISTA ordena_lista_posicoes (LISTA L, ESTADO *e) {

    int dist1, dist2;
    COORDENADA *coord1, *coord2;
    LISTA lista_final;

    if (lista_esta_vazia(L)) return NULL;

    coord1 = (COORDENADA) L->valor;
    coord2 = (COORDENADA) L->proximo->valor;

    dist1 = distancia (e, coord1->coluna, coord1->linha, obter_jogador_atual(e));
    dist2 = distancia (e, coord2->coluna, coord2->linha, obter_jogador_atual(e));

    if (dist1 > dist2) {
        lista_final -> valor = coord2;
        lista_final -> proximo -> valor = coord1;
    }

    lista_final -> proximo -> proximo =ordena_lista_posicoes(proximo(L), e);

    return lista_final;
}

int tamanho_lista (LISTA L) {
    if(L == NULL) return 0;
    else return (1 + tamanho_lista(L -> proximo));
}
