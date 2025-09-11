#include <stdio.h>
#define  tamano 5

int main() {
    float numeros[tamano] = {-1.5, -2.3, 2.3, -4.1, 5.0};
    int contador = 0;
    for (int i = 0; i < tamano; i++) {
        if (numeros[i] < 0) {
            contador++;
        }
    }
    printf("Hay %d numeros negativos\n", contador);
}