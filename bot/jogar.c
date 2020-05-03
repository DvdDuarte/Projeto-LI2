//
// Created by david on 12/03/20.
//

#include "jogar.h"
#include "estruturasDados.h"
#include "VerificaJogada.h"
#include "tipoErros.h"
#include "modificaEstado.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Funcao que deve ser completada e colocada na camada logica do programa

// Esta funcao devera receber o estado atual e uma coordenada e modificar o estado ao jogar na casa correta se a jogada for válida.
// A função devolve verdadeiro(valor diferente de zero) se for possível jogar e falso(zero) caso não seja possível.

int jogar(ESTADO *e, COORDENADA c) {

    VALIDACOES flag;

   // printf ("%d %d\n",c.coluna, c.linha);

    flag = jogadavalida(e, c);

    switch (flag) {
        case TUDO_OK :
            coloca_peca(e, c.coluna, c.linha, -1);
            return 0;

        case JOGADOR_1 :
            coloca_peca(e, c.coluna, c.linha, -1);
            imprime_vencedor(e);
            return 1;

        case JOGADOR_2 :
            coloca_peca(e, c.coluna, c.linha, -1);
            imprime_vencedor(e);
            return 1;

        default:
            return 0;

    }
}

void jog_pos (ESTADO *e, COORDENADA c, int i) {

        coloca_peca(e, c.coluna, c.linha, i);

}






// ao receber a coordenada da coluna, quando for para gravar a nova informacao, colocar isto - 'a' + 1