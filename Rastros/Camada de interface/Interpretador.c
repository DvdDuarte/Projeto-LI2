//
// Created by david on 12/03/20.
//

#include "Interpretador.h"
#include "../Camadas de dados/estruturasDados.h"
#include "../Camadas de dados/grava.h"
#include "../Lógica do programa/jogar.h"
#include "interface.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Funcao que deve ser completada e colocada na camada de interface

int interpretador(ESTADO *e) {

    int BUF_SIZE = 1024;
    char *filename;
    FILE *jogo;

    jogo = fopen ("jogo.txt","w+");

    mostrar_prompt(e, jogo);

    char linha[BUF_SIZE];
    char col[2], lin[2];
    if (fgets(linha, BUF_SIZE, stdin) == NULL) {
        return 0;
    }
    if (strlen(linha) == 3 && sscanf(linha, "%[a-h]%[1-8]", col, lin) == 2) {
        COORDENADA coord = {*col - 'a', *lin - '1'};
        jogar(e, coord, jogo);
    }

    if (strcmp(linha,"Q\n")==0) return 0;

    if(sscanf(linha, "gr %s", filename) == 1) {
        gravar(e,filename);
    }


    return 1;
}

//gr "nome do ficheiro" -> serve para gravar o estado do tabuleiro num ficheiro com o nome dado

//ler "nome do ficheiro" -> server para ler o estado do tabuleiro a partir do ficheiro

//movs -> o programa devera imprimir a lista dos movimentos feitos no jogo

//jog o programa devera escolher a melhor jogada para o jogador atual

//pos "numero da jogada" o programa devera permitir visualizar uma posicao anterior atraves do seu numero

//Q o programa termina, usar o fclose nessa funcao