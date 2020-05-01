#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Camadas_de_dados/estruturasDados.h"
#include "Camadas_de_dados/modificaEstado.h"
#include "Camada_de_interface/Interpretador.h"
#include "Logica_do_programa/jogar.h"
#include "Camada_de_interface/interface.h"

int main() {

    ESTADO *e = inicializar_estado();

    interpretador(e);

    return 0;

}