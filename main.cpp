#include <iostream>
#include "lib.h"
using namespace std;


void riempimento (char array[], char c, char end_input) {
    for (int col = 0; col < 20; ++col) {
        array[col] = 0;
    }
    cin >> array;
}

void riempimento2d (char array[10][20], char c, char end_input) {
    for (int row = 0; row < 10; ++row) {
        for (int col = 0; col < 20; ++col) {
            array[row][col] = 0;
            }
        cin >> array[row];
    }
}
void stampa(char array[]) {
    for (int col = 0; col < 20; ++col) {
        cout << array[col];
    }
    cout << endl;
}

void stampa2d (char array[10][20]) {
    for (int row = 0; row <10 ; ++row) {
        for (int col = 0; col < 20; ++col) {
            cout << array[row][col];
        }
        cout << endl;
    }
}

int main() {
    char lista_nomi [10][20];
    char nome[20];
    char c;
    char end_input = '0';

    riempimento2d(lista_nomi, c, end_input);
    stampa2d(lista_nomi);

    riempimento(nome, c, end_input);
    stampa(nome);

    if(posizione_match(lista_nomi, nome) == -1) {
        cout << "non presente"<< endl;
    }
    else {
        cout << posizione_match(lista_nomi, nome)<< endl;
    }

    return 0;
}


