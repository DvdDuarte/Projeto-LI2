//
// Created by david on 20/03/20.
//

#include "VerificaJogada.h"
#include "tipoErros.h"
#include <stdlib.h>
#include <math.h>


VALIDACOES jogadavalida(ESTADO *e, COORDENADA c) {

    // fazer aqui as verificacoes das jogadas
    //return 1 se o jogador 1 ganhar, 2 se o jogador 2 ganhar, 0 se a jogada for valida e (-1) se a jogada for invalida e 3 se o
    //jogador seguinte nao conseguir jogar mais
    //se a jogada for invalida, na funcao jogar deve se voltar a pedir ao mesmo jogador para voltar a jogar

    int coluna, linha, flag;

    coluna = c.coluna;
    linha = c.linha;
    flag = -1;
    CASA casa;

    casa = e -> tab[coluna][linha];

    //1- ver se nao sai dos limites do tabuleiro
    if (coluna > 8 || coluna < 0 || linha > 8 || linha < 0) return COORDENADA_INVALIDA;

    //5- se o outro jogador nao conseguir jogar mais o jogo acaba

    //2- se nao tiver fora do tab, ver se a casa recebida esta livre
    else if (casa == VAZIO || casa == UM || casa == DOIS) {

        //3- se estiver livre, ver se e vizinha com a casa da peca branca
        if (abs(distancia(e, coluna, linha)) <= 1) {
            //o valor abs da distancia entre as novas coordenadas e ass da peca branca for <= 1 entao )
            flag = 1;
        } else return JOGADA_INVALIDA;

        if (flag == 1) {
            //4- se for jogado na casa 1 ou 2 o jogo acaba
            if (coluna == 7 && linha == 0) return JOGADOR_2;
            else if (coluna == 0 && linha == 7) return JOGADOR_1;
        }

        return TUDO_OK;

    } else return JOGADA_INVALIDA;


}

// Função auxiliar que coloca a peça branca na coordenada onde se pretende jogar.
void coloca_peca(ESTADO *e, int coluna, int linha) {//, int i) {

    // Esta funcao vai transformar a posicao da peca branca numa peca preta

    int lastplayer, colunanterior, linhanterior, i;

    colunanterior = e->ultima_jogada.coluna;
    linhanterior = e->ultima_jogada.linha;
    lastplayer = e->jogador_atual;

    e->tab[colunanterior][linhanterior] = PRETA;
    e->tab[coluna][linha] = BRANCA;

    e->ultima_jogada.coluna = coluna;
    e->ultima_jogada.linha = linha;

    i = e -> num_jogadas;


    if (lastplayer == 1) {
        e->jogadas[i].jogador1.coluna = coluna;
        e->jogadas[i].jogador1.linha = linha;
    } else {
        e->jogadas[i].jogador2.coluna = coluna;
        e->jogadas[i].jogador2.linha = linha;
        e -> num_jogadas = i + 1;
    }

    if (lastplayer == 1) e->jogador_atual = 2;
    else e->jogador_atual = 1;

}

float distancia(ESTADO *e, int coluna, int linha) {

    int l, c;
    float dist;

    l = e->ultima_jogada.linha;
    c = e->ultima_jogada.coluna;

    dist = sqrt(pow((linha - l), 2) + pow((coluna - c), 2));

    return dist;
}