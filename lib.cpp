#include "lib.h"

int posizione_match (char lista_nomi[10][20], char nome[]) {
    int match = 0;

    for (int row = 0; row < 10; ++row) {
        match = 0;
        for (int col = 0; col < 20; ++col) {
                char car_nome = nome[col];
                char car_lista = lista_nomi[row][col];
                if (car_nome == car_lista || car_nome - car_lista == 'A'- 'a' || car_lista - car_nome == 'A'- 'a') {
                    match++;
                    if (match == 20) {
                        return row;
                    }
                    else if (col == 19 && row == 9) {
                        return -1;
                    }
            }
        }
    }
}

