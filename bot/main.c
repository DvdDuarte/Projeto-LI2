#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estruturasDados.h"
#include "modificaEstado.h"
#include "escolheJogada.h"
#include "lerEstado.h"
#include "grava.h"

#include "jogar.h"
#include "VerificaJogada.h"
#include "interface.h"


int main(int argc, char *argv[]) {

    ESTADO *e;

    if (argc == 3) {
        e = ler(argv[1]);

        if (verifica_fim_jogo(e) != IMPOSSIVEL_JOGAR) {
            joga_sozinho(e);

            gravar(e, argv[2]);
        }
    }


    return 0;

}