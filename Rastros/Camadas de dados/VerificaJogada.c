//
// Created by david on 20/03/20.
//

#include "VerificaJogada.h"
#include "tipoErros.h"
#include "modificaEstado.h"
#include "../Listas ligadas/modificaListas.h"
#include <stdlib.h>
#include <stdio.h>


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

    casa = e->tab[coluna][linha];

    //1- ver se nao sai dos limites do tabuleiro
    if (coluna > 8 || coluna < 0 || linha > 8 || linha < 0) return COORDENADA_INVALIDA;

        //2- se nao tiver fora do tab, ver se a casa recebida esta livre

    else if (casa == VAZIO || casa == UM || casa == DOIS) {

        //3- se estiver livre, ver se e vizinha com a casa da peca branca
        if (abs(distancia(e, coluna, linha, 0)) <= 2) {
            //o valor abs da distancia entre as novas coordenadas e ass da peca branca for <= 1 entao )
            flag = 1;
        } else return JOGADA_INVALIDA;

        if (flag == 1) {
            //4- se for jogado na casa 1 ou 2 o jogo acaba
            if (coluna == 7 && linha == 0) return JOGADOR_2;
            else if (coluna == 0 && linha == 7) return JOGADOR_1;
        }

        return TUDO_OK;
//5- se o outro jogador nao conseguir jogar mais o jogo acaba
    } else return (verifica_fim_jogo(e));//JOGADA_INVALIDA;


}

// Função auxiliar que coloca a peça branca na coordenada onde se pretende jogar.
void coloca_peca(ESTADO *e, int coluna, int linha, int flag) {//, int i) {

    // Esta funcao vai transformar a posicao da peca branca numa peca preta

    int colunanterior, linhanterior, i;

    colunanterior = e->ultima_jogada.coluna;
    linhanterior = e->ultima_jogada.linha;


    e->tab[colunanterior][linhanterior] = PRETA;
    e->tab[coluna][linha] = BRANCA;

    e->ultima_jogada.coluna = coluna;
    e->ultima_jogada.linha = linha;

    if (flag == -1) {
        i = e->num_jogadas;
    } else i = flag;

    if (obter_jogador_atual(e) == 1) {
        e->jogadas[i].jogador1.coluna = coluna;
        e->jogadas[i].jogador1.linha = linha;
    } else {
        e->jogadas[i].jogador2.coluna = coluna;
        e->jogadas[i].jogador2.linha = linha;

        e->posicao_jogada = i;
        if (flag == -1) {
            e->num_jogadas = i + 1;
        }
    }

    if (obter_jogador_atual(e) == 1) e->jogador_atual = 2;
    else e->jogador_atual = 1;


}

float distancia(ESTADO *e, int coluna, int linha, int flag) {

    int l, c;
    float dist;

    switch (flag) {

        case 0:
            l = e->ultima_jogada.linha;
            c = e->ultima_jogada.coluna;

            dist = (linha - l) * (linha - l) + (coluna - c) * (coluna - c);
            break;
        case 1:
            dist = (7 - linha) * (7 - linha) + (0 - coluna) * (0 - coluna);
            break;
        case 2:
            dist = (0 - linha) * (0 - linha) + (7 - coluna) * (7 - coluna);
            break;
    }


    return dist;
}

VALIDACOES verifica_fim_jogo(ESTADO *e) {

    int coluna, linha;

    coluna = e->ultima_jogada.coluna;
    linha = e->ultima_jogada.linha;

    if (length(posicoes_possiveis(e, IMPOSSIVEL_JOGAR)) == 5 && (coluna == 0 || coluna == 7 || linha == 0 ||
        linha == 7))
        return IMPOSSIVEL_JOGAR;
    else if (length(posicoes_possiveis(e, IMPOSSIVEL_JOGAR)) == 8) return IMPOSSIVEL_JOGAR;

    else return JOGADA_INVALIDA;

    /*
    if (e->tab[coluna + 1][linha - 1] == PRETA && e->tab[coluna + 1][linha] == PRETA &&
        e->tab[coluna + 1][linha + 1] == PRETA
        && e->tab[coluna - 1][linha - 1] == PRETA && e->tab[coluna - 1][linha] == PRETA &&
        e->tab[coluna - 1][linha + 1] == PRETA
        && e->tab[coluna][linha - 1] == PRETA && e->tab[coluna][linha + 1] == PRETA)
        return IMPOSSIVEL_JOGAR;
    else return JOGADA_INVALIDA;
*/
}

void imprime_vencedor(ESTADO *e) {

    if (obter_jogador_atual(e) == 1) {
        printf("O Jogador 2 ganhou\n O Jogo Acabou\n");
    } else printf("O Jogador 1 ganhou\n O Jogo Acabou\n");

}