#include <stdio.h>

#define TAM 6  // Cambiado de 5 a 6 para coincidir con el array

// Declaración de la función antes de main
int posMenor(float D[], int tam, int ps);

int main() {
    int tam = TAM;  // Inicializamos tam con el valor de TAM
    float datos[TAM] = {8.2, 9.1, 1.5, 2.2, 7.3, 4.9};

    printf("Array original:\n");
    for(int i = 0; i < tam; i++) {
        printf("%.2f ", datos[i]);
    }
    printf("\n\n");

    // Algoritmo de ordenamiento por selección
    for(int i = 0; i < tam; i++) {
        int posNum = posMenor(datos, tam, i);

        if(posNum != i) {
            // Intercambio de valores
            float tmp = datos[posNum];
            datos[posNum] = datos[i];
            datos[i] = tmp;
        }
    }

    printf("Array ordenado:\n");
    for(int i = 0; i < tam; i++) {
        printf("%.2f ", datos[i]);
    }
    printf("\n");

    return 0;
}

// Función que encuentra la posición del menor elemento
int posMenor(float D[], int tam, int ps) {
    int i;
    float men = D[ps];  // Asumimos que el menor es el primero
    int pm = ps;        // Guardamos su posición

    // Buscamos si hay algún elemento menor
    for(i = ps; i < tam; i++) {
        if(D[i] < men) {
            men = D[i];  // Actualizamos el menor valor
            pm = i;      // Actualizamos la posición
        }
    }

    return pm;  // Retornamos la posición del menor
}