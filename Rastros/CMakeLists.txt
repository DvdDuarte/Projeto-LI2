cmake_minimum_required(VERSION 3.15)
project(Rastros C)

set(CMAKE_C_STANDARD 99)

add_executable(Rastros main.c "Camada de interface/Interpretador.c" "Camada de interface/Interpretador.h" "Camadas de dados/estruturasDados.c" "Camadas de dados/estruturasDados.h" "Lógica do programa/jogar.c" "Lógica do programa/jogar.h" "Camadas de dados/modificaEstado.c" "Camadas de dados/modificaEstado.h" "Camada de interface/interface.c" "Camada de interface/interface.h" "Camada de interface/imprimeCasa.c" "Camada de interface/imprimeCasa.h" "Camadas de dados/grava.c" "Camadas de dados/grava.h" "Camadas de dados/VerificaJogada.c" "Camadas de dados/VerificaJogada.h" "Camadas de dados/tipoErros.c" "Camadas de dados/tipoErros.h" "Camadas de dados/lerEstado.c" "Camadas de dados/lerEstado.h" "Camadas de dados/listaMovs.c" "Camadas de dados/listaMovs.h" "Camadas de dados/buscaPosicao.c" "Camadas de dados/buscaPosicao.h" "Listas ligadas/dadosListas.c" "Listas ligadas/dadosListas.h" "Listas ligadas/modificaListas.c" "Listas ligadas/modificaListas.h" "Listas ligadas/escolheJogada.c" "Listas ligadas/escolheJogada.h")

target_link_libraries(Rastros m)