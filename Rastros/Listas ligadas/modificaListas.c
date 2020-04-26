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


    coluna = e -> ultima_jogada.coluna;
    linha = e -> ultima_jogada.linha;

    posicoes = criar_lista();

    for (i = -1; i <= 1; i++) {
        for (j = -1; j <= 1; j++) {
            if (e->tab[coluna + i][linha + j] == VAZIO) {
                COORDENADA *coord = malloc(sizeof(COORDENADA));
                *coord = (COORDENADA) {coluna + i, linha + j};
                posicoes = insere_cabeca(posicoes, coord);

            }

        }
    }

    return posicoes;
}

COORDENADA *menor (LISTA L, ESTADO *e) {

    int dist1, dist2, linha;
    COORDENADA *menor_elemento, *elemento_comparar;
    menor_elemento = (COORDENADA *) devolve_cabeca(L);

    L = remove_cabeca(L);

    for(LISTA T = L; !lista_esta_vazia(T); T = proximo(T)) {

        elemento_comparar = T->valor;

        dist1 = distancia(e, menor_elemento->coluna, menor_elemento->linha, obter_jogador_atual(e));
        dist2 = distancia(e, elemento_comparar->coluna, elemento_comparar->linha, obter_jogador_atual(e));

        if (dist1 > dist2 ) menor_elemento = T->valor;
    }


    return menor_elemento;
}
