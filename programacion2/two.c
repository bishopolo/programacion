#include <stdio.h>

void llenarArray(float array[], int tamano);
int rangoElementos(float array[], int tamano, float min, float max);

int main() {
    int tamano;
    float min, max;
    printf("Ingrese el tamaño del array: ");
    scanf("%d", &tamano);
    printf("Ingrese el minimo del array: ");
    scanf("%f", &min);
    printf("Ingrese el maximo del array: ");
    scanf("%f", &max);
    float array[tamano];
    llenarArray(array, tamano);
    printf("Elementos en el rango [%.2f, %.2f]: %d\n", min, max, rangoElementos(array, tamano, min, max));


}

void llenarArray(float array[], int tamano) {
    for (int i = 0; i < tamano; i++) {
        printf("dame el valor del elemento %d: ", i + 1);
        scanf("%f", &array[i]);
    }
}

int rangoElementos(float array[], int tamano, float min, float max) {
    int contador = 0;
    for (int i = 0; i < tamano; i++) {
        if (array[i] >= min && array[i] <= max) {
            // printf("elemento %d: %.2f \n", i + 1, array[i]);
            contador++;
        }
    }

    return contador;
}

