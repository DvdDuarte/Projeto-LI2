//
// Created by david on 13/03/20.
//

#include "transformaBranca.h"

ESTADO *transformaBrancaPreta (ESTADO *e) {

    int i, j;
    CASA peca;

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            peca = e -> tab[j][i];

            switch (peca)
            {
                case BRANCA:
                    peca = PRETA;
                    break;

                default:
                    peca = peca;
            }
        }
    }

    e -> tab[j][i] = peca;

    return e;
}