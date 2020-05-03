#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estruturasDados.h"
#include "modificaEstado.h"
#include "escolheJogada.h"
#include "lerEstado.h"
#include "grava.h"
#include "modificaListas.h"
#include "jogar.h"
#include "VerificaJogada.h"
#include "interface.h"


int main(int argc, char *argv[]) {

    int jogador, coluna_menor, linha_menor, coluna_aleatoria, linha_aleatoria, distancia_menor, distancia_aleatoria;
    ESTADO *e;
    COORDENADA *coordenada_menor;
    COORDENADA *coordenada_aleatoria;
    LISTA posicoes;

    if (argc == 3) {
        e = ler(argv[1]);

        if (verifica_fim_jogo(e) != IMPOSSIVEL_JOGAR) {

        jogador = obter_jogador_atual(e);

        posicoes = posicoes_possiveis(e);

        coordenada_aleatoria = devolve_cabeca(posicoes);
        coluna_aleatoria = coordenada_aleatoria->coluna;
        linha_aleatoria = coordenada_aleatoria->linha;

        coordenada_menor = menor(posicoes, e);
        coluna_menor = coordenada_menor->coluna;
        linha_menor = coordenada_menor->linha;


        distancia_aleatoria = distancia(e,coluna_aleatoria,linha_aleatoria,jogador);
        distancia_menor = distancia (e, coluna_menor, linha_menor, jogador);

        if (distancia_menor <= distancia_aleatoria) joga_sozinho(e);
        else jogar_automaticamente(e);

            gravar(e, argv[2]);
        }
    }


    return 0;

}