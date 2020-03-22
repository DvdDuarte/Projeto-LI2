//
// Created by david on 20/03/20.
//

/**
 @file tipoErros.h
 Definicao dos tipos de erros assim como as suas validacoes
 */
#ifndef RASTROS_TIPOERROS_H
#define RASTROS_TIPOERROS_H

/**
 \brief definicao do tipo VALIDACOES que contem as respetivas validacoes assim como alguns erros (que sao tambem validacoes)
 */
typedef enum {
    TUDO_OK,
    JOGADOR_1,
    JOGADOR_2,
    COORDENADA_INVALIDA,
    JOGADA_INVALIDA,
    ERRO_LER_TAB,
    ERRO_ABRIR_FICHEIRO,
} VALIDACOES;
#endif //RASTROS_TIPOERROS_H
