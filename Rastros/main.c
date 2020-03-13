#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Camadas de dados/estruturasDados.h"
#include "Camadas de dados/modificaEstado.h"
#include "Camada de interface/Interpretador.h"

int main() {

    ESTADO *e = inicializar_estado();
    interpretador(e);
    return 0;

}