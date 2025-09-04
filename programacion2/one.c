#include <stdio.h>
#include <math.h>


void llenarVector(float vector[], int tamano);
void imprimirVector(float vector[], int tamano);
float magnitudVector(float vector[], int tamano);

int main() {
    int tamano;
    printf("dame el tamaño para el vector: ");
    scanf("%d", &tamano);
    float vector[tamano];

    llenarVector(vector, tamano);
    imprimirVector(vector, tamano);
    printf("La magnitud del vector es %.2f", magnitudVector(vector, tamano));


    return 0;

}

void llenarVector(float vector[], int tamano) {
    for (int i = 0; i < tamano; i++) {
        printf("dame el valor del componente %d: ", i + 1);
        scanf("%f", &vector[i]);
    }
}

void imprimirVector(float vector[], int tamano) {
    for (int i = 0; i < tamano; i++) {
        printf("componente %d: %.2f \n", i + 1, vector[i]);
    }
}

float magnitudVector(float vector[], int tamano) {
    float suma = 0;
    for (int i = 0; i < tamano; i++) {
        suma += vector[i] * vector[i];
    }
    return sqrt(suma);
}