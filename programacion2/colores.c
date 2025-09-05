#include <string.h>
#include "colores.h"

int colorANumero(char color[]) {
    if (strcmp(color, "negro") == 0) return 0;
    if (strcmp(color, "marron") == 0) return 1;
    if (strcmp(color, "rojo") == 0) return 2;
    if (strcmp(color, "naranja") == 0) return 3;
    if (strcmp(color, "amarillo") == 0) return 4;
    if (strcmp(color, "verde") == 0) return 5;
    if (strcmp(color, "azul") == 0) return 6;
    if (strcmp(color, "violeta") == 0) return 7;
    if (strcmp(color, "gris") == 0) return 8;
    if (strcmp(color, "blanco") == 0) return 9;

    return -1;
}