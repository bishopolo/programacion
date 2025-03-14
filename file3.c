//
// Created by Jorge Echeverri on 3/10/25.
//

#include <stdio.h>

int main() {
    float number, resto;
    int x;

    printf("Ingresa el numero con decimales: ");
    scanf("%f", &number);

    x = number;
    resto = number - x;

    if (number < 0) {
        if (resto <= -0.5) {
            printf("el numero %.2f redondeado seria: %d\n", number, x - 1);
        } else {
            printf("el numero %.2f no se puede redondear y queda %d\n", number, x);
        }
    } else {
        if (resto >= 0.5) {
            printf("el numero %.2f redondeado seria: %d\n", number, x + 1);
        } else {
            printf("el numero %.2f no se puede redondear y queda %d\n", number, x);
        }
    }

    return 0;
}
