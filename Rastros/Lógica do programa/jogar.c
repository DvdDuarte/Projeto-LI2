//
// Created by david on 12/03/20.
//

#include "jogar.h"
#include "../Camadas de dados/estruturasDados.h"
#include "../Camadas de dados/VerificaJogada.h"
#include "../Camadas de dados/tipoErros.h"
#include "../Camada de interface/interface.h"
#include "transformaBranca.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Funcao que deve ser completada e colocada na camada logica do programa

// Esta funcao devera receber o estado atual e uma coordenada e modificar o estado ao jogar na casa correta se a jogada for válida.
// A função devolve verdadeiro(valor diferente de zero) se for possível jogar e falso(zero) caso não seja possível.
int jogar(ESTADO *e, COORDENADA c, FILE *jogo) {

    VALIDACOES flag;
    flag = jogadavalida(e, c);

    switch (flag) {
        case TUDO_OK :
            coloca_peca(e, c.coluna, c.linha);
            break;

        case JOGADOR_1 :
            fprintf(jogo, "O Jogador 1 ganhou");
            fprintf(jogo, "O Jogo Acabou");
            fclose(jogo);
            break;

        case JOGADOR_2 :
            fprintf(jogo, "O Jogador 2 ganhou");
            fprintf(jogo, "O Jogo Acabou");
            fclose(jogo);
            break;

        case COORDENADA_INVALIDA :
            fprintf (jogo,"A jogada nao e valida");
            break;

        case JOGADA_INVALIDA :
            fprintf (jogo,"A jogada nao e valida");
            break;
    }
    
    return 1;

}





// ao receber a coordenada da coluna, quando for para gravar a nova informacao, colocar isto - 'a' + 1