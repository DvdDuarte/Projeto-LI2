//
// Created by david on 12/03/20.
//

#include "Interpretador.h"
#include "../Camadas_de_dados/estruturasDados.h"
#include "../Camadas_de_dados/grava.h"
#include "../Logica_do_programa/jogar.h"
#include "interface.h"
#include "../Camadas_de_dados/lerEstado.h"
#include "../Camadas_de_dados/buscaPosicao.h"
#include "../Listas_ligadas/escolheJogada.h"
#include "../Camadas_de_dados/VerificaJogada.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Funcao que deve ser completada e colocada na camada de interface

int interpretador(ESTADO *e) {

    while (1) {
        //int BUF_SIZE = 1024;
        char filename[BUF_SIZE];
        char linha[BUF_SIZE];
        char col[2], lin[2];
        int pos;


        mostrar_prompt(e, stdout);
       if (verifica_fim_jogo(e) == IMPOSSIVEL_JOGAR) {
           imprime_vencedor(e);
           return 0;

       }

        if (fgets(linha, BUF_SIZE, stdin) == NULL) {
            return 0;
        }

        if (sscanf(linha, "pos %d\n", &pos) == 1) {
            posicao(pos - 1, e);
        }

        if (strlen(linha) == 3 && sscanf(linha, "%[a-h]%[1-8]", col, lin) == 2) {

            COORDENADA coord = {*col - 'a', '8' - *lin};

            if (jogar(e,coord)) {
                mostrar_tabuleiro(e, stdout);
                return 0;
            }

        }

        if (strcmp(linha, "Q\n") == 0) return 0;

        if (strcmp(linha, "movs\n") == 0) {

            mostrar_movimentos(e, stdout);

        }

        if (strcmp(linha, "jog\n") == 0) {

            jogar_automaticamente (e);

        }

        if (strcmp(linha, "jog2\n") == 0) {

            joga_sozinho (e);

        }

        if (sscanf(linha, "gr %s\n", filename) == 1) {

            gravar(e, filename);

        }

        if (sscanf(linha, "ler %s\n", filename) == 1) {

            e = ler(filename);


        }



    }

    return 1;

}
//gr "nome do ficheiro" -> serve para gravar o estado do tabuleiro num ficheiro com o nome dado

//ler "nome do ficheiro" -> server para ler o estado do tabuleiro a partir do ficheiro

//movs -> o programa devera imprimir a lista dos movimentos feitos no jogo

//jog o programa devera escolher a melhor jogada para o jogador atual

//pos "numero da jogada" o programa devera permitir visualizar uma posicao anterior atraves do seu numero

//Q o programa termina, usar o fclose nessa funcao