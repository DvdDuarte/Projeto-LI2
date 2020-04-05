//
// Created by david on 12/03/20.
//

#include "jogar.h"
#include "../Camadas de dados/estruturasDados.h"
#include "../Camadas de dados/VerificaJogada.h"
#include "../Camadas de dados/tipoErros.h"
#include "../Camada de interface/interface.h"
#include "../Camadas de dados/modificaEstado.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Funcao que deve ser completada e colocada na camada logica do programa

// Esta funcao devera receber o estado atual e uma coordenada e modificar o estado ao jogar na casa correta se a jogada for válida.
// A função devolve verdadeiro(valor diferente de zero) se for possível jogar e falso(zero) caso não seja possível.

int jogar(ESTADO *e, COORDENADA c) {

    VALIDACOES flag;

    printf ("%d %d\n",c.coluna, c.linha);
    flag = jogadavalida(e, c);

    switch (flag) {
        case TUDO_OK :
            coloca_peca(e, c.coluna, c.linha);
            return 0;

        case IMPOSSIVEL_JOGAR:
            if (obter_jogador_atual(e) == 1) {
                printf("O Jogador 2 ganhou\n O Jogo Acabou\n");
            } else printf("O Jogador 1 ganhou\n O Jogo Acabou\n");
            return 1;

        case JOGADOR_1 :
            coloca_peca(e, c.coluna, c.linha);
            printf("O Jogador 1 ganhou\n O Jogo Acabou\n");
            return 1;

        case JOGADOR_2 :
            coloca_peca(e, c.coluna, c.linha);
            printf("O Jogador 2 ganhou\n O Jogo Acabou\n");
            return 1;

        default:
            return 0;

    }
}





// ao receber a coordenada da coluna, quando for para gravar a nova informacao, colocar isto - 'a' + 1