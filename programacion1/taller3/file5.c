//
// Created by Jorge Echeverri on 3/31/25.
//

#include <stdio.h>
#include <math.h>

int main() {

    float velocidad_inicial, angulo_grados, angulo_radianes, x, y = 0, tiempo = 0.0;
    float gravedad = 9.8;

    printf("Ingrese la velocidad inicial: ");
    scanf("%f", &velocidad_inicial);

    printf("Ingrese el ángulo de lanzamiento (en grados): ");
    scanf("%f", &angulo_grados);

    //convertir grados a radianes  grados * PI / 180
    angulo_radianes = angulo_grados * M_PI / 180.0;

    while (y >= 0) {
        x = velocidad_inicial * cos(angulo_radianes) * tiempo;
        y = velocidad_inicial * sin(angulo_radianes) * tiempo - 0.5 * gravedad * tiempo * tiempo;
        printf("Tiempo: %.2f s, Coordenada x: %.2f m, Coordenada y: %.2f m\n", tiempo, x, y);
        tiempo += 0.1;
    }

}