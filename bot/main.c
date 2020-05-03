#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estruturasDados.h"
#include "modificaEstado.h"
#include "escolheJogada.h"
#include "lerEstado.h"
#include "grava.h"

#include "jogar.h"


int main(int argc, char *argv[]) {

    ESTADO *e;

    if (argc == 3) {
        e = ler(argv[1]);

        joga_sozinho(e);

        gravar(e, argv[2]);
    }


    return 0;

}