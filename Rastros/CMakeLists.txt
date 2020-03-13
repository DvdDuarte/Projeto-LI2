cmake_minimum_required(VERSION 3.15)
project(Rastros C)

set(CMAKE_C_STANDARD 99)

add_executable(Rastros main.c Intrepretador.c Intrepretador.h estruturasDados.c estruturasDados.h jogar.c jogar.h inicializador.c inicializador.h interface.c interface.h)