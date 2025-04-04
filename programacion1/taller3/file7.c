#include <stdio.h>

int main() {
    int number, suma = 0;
    printf("dame un  número para saber si es perfecto: ");
    scanf("%i", &number);

    //usamos number / 2 porque los números divisores de un número van entre 1 y number / 2, esto hace
    // que nos ahorremos iteraciones y sea mas óptimo que hacer < number
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            suma += i;
            // printf("%i ", i);
        }
    }

    if (suma == number) {
        printf("%d es perfecto, ya que la suma de sus divisores da %d", number, suma);
    } else {
        printf("el número %d no es perfecto, ya que la suma de sus divisores no da ", number, number);
    }
}