cmake_minimum_required(VERSION 3.15)
project(Rastros C)

set(CMAKE_C_STANDARD 99)

add_executable(Rastros main.c "Camada_de_interface/Interpretador.c" "Camada_de_interface/Interpretador.h" "Camadas_de_dados/estruturasDados.c" "Camadas_de_dados/estruturasDados.h" "Logica_do_programa/jogar.c" "Logica_do_programa/jogar.h" "Camadas_de_dados/modificaEstado.c" "Camadas_de_dados/modificaEstado.h" "Camada_de_interface/interface.c" "Camada_de_interface/interface.h" "Camada_de_interface/imprimeCasa.c" "Camada_de_interface/imprimeCasa.h" "Camadas_de_dados/grava.c" "Camadas_de_dados/grava.h" "Camadas_de_dados/VerificaJogada.c" "Camadas_de_dados/VerificaJogada.h" "Camadas_de_dados/tipoErros.c" "Camadas_de_dados/tipoErros.h" "Camadas_de_dados/lerEstado.c" "Camadas_de_dados/lerEstado.h" "Camadas_de_dados/listaMovs.c" "Camadas_de_dados/listaMovs.h" "Camadas_de_dados/buscaPosicao.c" "Camadas_de_dados/buscaPosicao.h" "Listas_ligadas/dadosListas.c" "Listas_ligadas/dadosListas.h" "Listas_ligadas/modificaListas.c" "Listas_ligadas/modificaListas.h" "Listas_ligadas/escolheJogada.c" "Listas_ligadas/escolheJogada.h")

#target_link_libraries(Rastros m)