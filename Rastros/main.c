#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    ESTADO *e = inicializar_estado();
    interpretador(e);
    return 0;
}