//
// Created by david on 20/03/20.
//

#include "VerificaJogada.h"
#include "../Lógica do programa/transformaBranca.h"
#include "tipoErros.h"
#include <stdlib.h>
#include <math.h>


int jogadavalida (ESTADO *e, COORDENADA c) {

    // fazer aqui as verificacoes das jogadas
    //return 1 se o jogador 1 ganhar, 2 se o jogador 2 ganhar, 0 se a jogada for valida e (-1) se a jogada for invalida e 3 se o
    //jogador seguinte nao conseguir jogar mais
    //se a jogada for invalida, na funcao jogar deve se voltar a pedir ao mesmo jogador para voltar a jogar

    int coluna, linha, colunapecabranca, linhapecabranca, flag;

    coluna = c.coluna;
    linha = c.linha;
    colunapecabranca = e->ultima_jogada.coluna;
    linhapecabranca = e->ultima_jogada.linha;
    flag = -1;


//1- ver se nao sai dos limites do tabuleiro

    if (coluna > 8 || coluna < 1 || linha > 8 || linha < 1) return COORDENADA_INVALIDA;


//2- se nao tiver fora do tab, ver se a casa recebida esta livre
    else if (e -> tab[coluna][linha] == VAZIO) {

        //3- se estiver livre, ver se e vizinha com a casa da peca branca
        if (abs(distancia(e, coluna, linha)) <= 1)
            //o valor abs da distancia entre as novas coordenadas e ass da peca branca for <= 1 entao )
            flag = 1;
        else return flag;

        if (flag == 1) {

            //4- se for jogado na casa 1 ou 2 o jogo acaba
            if (coluna == 7 && linha == 0) return JOGADOR_2;
            else if (coluna == 0 && linha == 7) return JOGADOR_1;
        }

        return TUDO_OK ;

    } else return JOGADA_INVALIDA;

    //5- se o outro jogador nao conseguir jogar mais o jogo acaba
}

// Função auxiliar que coloca a peça branca na coordenada onde se pretende jogar.
void coloca_peca(ESTADO *e, int coluna, int linha) {

    // Esta funcao vai transformar a posicao da peca branca numa peca preta
    e = transformaBrancaPreta(e);

    e->tab[coluna][linha] = BRANCA;

}

float distancia(ESTADO *e, int coluna, int linha) {

    int xo, yo;
    float dist;

    xo = e->ultima_jogada.linha;
    yo = e->ultima_jogada.coluna;

    dist = sqrt(pow((linha - xo), 2) + pow((coluna - yo),2));

    return dist;
}