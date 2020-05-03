cmake_minimum_required(VERSION 3.16)
project(bot C)

set(CMAKE_C_STANDARD 99)

add_executable(Rastros main.c "estruturasDados.c" "estruturasDados.h" "jogar.c" "jogar.h" "modificaEstado.c" "modificaEstado.h" "VerificaJogada.c" "VerificaJogada.h" "tipoErros.c" "tipoErros.h" "buscaPosicao.c" "buscaPosicao.h" "dadosListas.c" "dadosListas.h" "modificaListas.c" "modificaListas.h" "escolheJogada.c" "escolheJogada.h" "grava.c" "grava.h" "lerEstado.c" "lerEstado.h" "listaMovs.c" "listaMovs.h" "interface.c" "interface.h" "imprimeCasa.c" "imprimeCasa.h")