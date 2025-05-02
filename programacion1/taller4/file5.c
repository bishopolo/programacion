#include <stdio.h>
int i = 1;
int mcm(int num1, int num2) {

    int mayor = (num1 > num2) ? num1 : num2;
    int menor = (num1 < num2) ? num1 : num2;

    // asignamos el mayor a la variable posibleMcm porque permite hacer menos iteraciones
    // si pusieramos el menor, tendríamos que iterar más veces
    int posibleMcm = mayor;

    while (1) {
        if (posibleMcm % menor == 0) {
            return posibleMcm;
        }
        posibleMcm += mayor;
        i++;
    }

}

int main() {
    int num1, num2;
    puts("ingresa los dos números para saber su mcm: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        return printf("no se permiten números negativos o cero\n");
    }

    printf("el mcm de (%d, %d) es -> %d", num1, num2, mcm(num1, num2));
    printf("\n");
    printf("se iteró %d veces\n", i);


}