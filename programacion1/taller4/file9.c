#include <stdio.h>


void pasarABinario(int number) {

    int limit = 128;

    for (int i = 0; i < 8; i++) {

        if (number >= limit) {
            printf("1\t");
            number -= limit;
        } else {
            printf("0\t");
        }
        limit /= 2;
        // printf("number  = %d\n", number);
        // printf("limit / 2 = %d\n", limit);
    }

}

int main() {
    int number;
    puts("dame un número para pasar a binario");
    scanf("%d", &number);
    printf("el número %d en binario es: \n", number);
    printf("128\t64\t32\t16\t8\t4\t2\t1\n");
    pasarABinario(number);
}