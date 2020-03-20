//
// Created by david on 12/03/20.
//

#include "jogar.h"
#include "../Camadas de dados/estruturasDados.h"
#include "../Camadas de dados/VerificaJogada.h"
#include "../Camada de interface/interface.h"
#include "transformaBranca.h"
#include "tipoErros.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Funcao que deve ser completada e colocada na camada logica do programa

// Esta funcao devera receber o estado atual e uma coordenada e modificar o estado ao jogar na casa correta se a jogada for válida.
// A função devolve verdadeiro(valor diferente de zero) se for possível jogar e falso(zero) caso não seja possível.
int jogar(ESTADO *e, COORDENADA c, FILE *jogo) {

    int flag;

    flag = 0;

    if (c.coluna - 1 == 'h' && c.linha - 1 == 0) {
        fprintf(jogo,"O Jogador 2 ganhou");

        flag = 0;
    } else if (c.coluna - 1 == 'a' && c.linha - 1 == 7) {
        fprintf(jogo,"O Jogador 1 ganhou");
        flag = 0;
    } else if (flag == 1 && !(e->tab[c.linha][c.coluna] == VAZIO &&
                              (e->ultima_jogada.coluna + 1 == c.coluna || e->ultima_jogada.coluna - 1 == c.coluna) &&
                              (e->ultima_jogada.linha + 1 == c.linha || e->ultima_jogada.linha - 1 == c.linha))) {
        if (c.coluna - 1 > 104 || c.coluna - 1 < 97 || c.linha - 1 > 7 || c.linha - 1 < 0) {
            fprintf (jogo,"A jogada nao e valida");

        } else {
        coloca_peca(e, c.coluna, c.linha);
        fprintf(jogo,"jogar %d %d\n", c.coluna, c.linha);
        flag = 1;
        }
    } else flag = 0;


    if (flag == 0) {
        fprintf(jogo, "O Jogo Acabou");
        fclose(jogo);
    }

    return 1;

}





// ao receber a coordenada da coluna, quando for para gravar a nova informacao, colocar isto - 'a' + 1