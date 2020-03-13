cmake_minimum_required(VERSION 3.15)
project(Rastros C)

set(CMAKE_C_STANDARD 99)

add_executable(Rastros main.c "Camada de interface/Interpretador.c" "Camada de interface/Interpretador.h" "Camadas de dados/estruturasDados.c" "Camadas de dados/estruturasDados.h" "Lógica do programa/jogar.c" "Lógica do programa/jogar.h" "Camadas de dados/modificaEstado.c" "Camadas de dados/modificaEstado.h" "Camada de interface/interface.c" "Camada de interface/interface.h")