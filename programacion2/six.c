#include <stdio.h>
#include <math.h>
#include "colores.h"


#define LIMIT 10
#define BANDAS 3



int main() {
    puts("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
    puts("@\t\tCalculadora Resistencias\t\t@");
    puts("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
    puts("Los colores disponibles son");
    puts("Negro   Marrón  Rojo");
    puts("Naranja Amarillo Verde");
    puts("Azul    Violeta Gris");
    puts("Blanco");
    puts("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");



    char bandas[BANDAS][LIMIT];
    for (int i = 0; i < BANDAS; i++) {
        printf("Ingrese el color para la banda %d ", i + 1);
        scanf(" %s", bandas[i]);
    }

    // for (int i = 0; i < BANDAS; i++) {
    //     printf("%s\n", bandas[i]);
    // }

    int banda1 = colorANumero(bandas[0]);
    int banda2 = colorANumero(bandas[1]);
    int banda3 = colorANumero(bandas[2]);

    if (banda1 != -1 && banda2 != -1 && banda3 != -1) {
        int valor = (banda1 * 10 + banda2) * pow(10, banda3);
        printf("el valor de la resistencia es de %d ohmios", valor);
    }else {
        puts("Error, ingresaste algún color mal, intenta de nuevo");
    }
}
