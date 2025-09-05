#include <stdio.h>
#define FILA 3
#define COLUMNA 3

void copiarMatriz(int matrizA[][COLUMNA], int matrizB[][COLUMNA], int matrizResultado[][COLUMNA]);

int main() {

    int matrizA[FILA][COLUMNA] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }, matrizB[FILA][COLUMNA] = {
        {10, 11, 12},
        {13, 14, 15},
        {16, 17, 18}
        }, matrizResultado[FILA*2][COLUMNA];


    copiarMatriz(matrizA, matrizB, matrizResultado);



}

void copiarMatriz(int matrizA[][COLUMNA], int matrizB[][COLUMNA], int matrizResultado[][COLUMNA]) {
    for (int i = 0, k = 0, l = 1; i < FILA; i++, k+=2, l+=2) {
        for (int j = 0; j < COLUMNA; j++) {
            matrizResultado[k][j] = matrizA[i][j] ;
            matrizResultado[l][j] =  matrizB[i][j];
        }
    }


    for (int i = 0; i < FILA * 2; i++) {
        for (int j = 0; j < COLUMNA; j++) {
            printf(" MatrizResul [%d][%d] = %d",i, j, matrizResultado[i][j]);
        }
        printf("\n");
    }
}