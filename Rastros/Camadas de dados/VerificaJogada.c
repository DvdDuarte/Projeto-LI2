//
// Created by david on 20/03/20.
//

#include "VerificaJogada.h"
#include "../Lógica do programa/transformaBranca.h"


int jogadavalida (ESTADO *e, COORDENADA c) {


    int coluna, linha;

    coluna = c.coluna;
    linha = c.linha;

    // fazer aqui as verificacoes das jogadas

    //1- ver se nao sai dos limites do tabuleiro
    //2- se nao tiver fora do tab, ver se a casa recebida esta livre
    //3- se estiver livre, ver se e vizinha com a casa da peca branca
    //4- se for jogado na casa 1 ou 2 o jogo acaba
    //5- se o outro jogador nao conseguir jogar mais o jogo acaba
    //return 1 se o jogador 1 ganhar, 2 se o jogador 2 ganhar, 0 se a jogada for valida e (-1) se a jogada for invalida e 3 se o
    //jogador seguinte nao conseguir jogar mais
    //se a jogada for invalida, na funcao jogar deve se voltar a pedir ao mesmo jogador para voltar a jogar

}

// Função auxiliar que coloca a peça branca na coordenada onde se pretende jogar.
void coloca_peca(ESTADO *e, int coluna, int linha) {

    // Esta funcao vai transformar a posicao da peca branca numa peca preta
    e = transformaBrancaPreta(e);

    e->tab[coluna][linha] = BRANCA;

}