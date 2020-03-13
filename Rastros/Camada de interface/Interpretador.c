//
// Created by david on 12/03/20.
//

#include "Interpretador.h"
#include "../Camadas de dados/estruturasDados.h"
#include "../Lógica do programa/jogar.h"
#include "interface.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Funcao que deve ser completada e colocada na camada de intaerface

int interpretador(ESTADO *e) {

    char linha[BUF_SIZE];
    char col[2], lin[2];
    if (fgets(linha, BUF_SIZE, stdin) == NULL)
        return 0;
    if (strlen(linha) == 3 && sscanf(linha, "%[a-h]%[1-8]", col, lin) == 2) {
        COORDENADA coord = {*col - 'a', *lin - '1'};
        jogar(e, coord);
        mostrar_tabuleiro(e);
    }
    return 1;

}