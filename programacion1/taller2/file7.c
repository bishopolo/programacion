//
// Created by Jorge Echeverri on 3/11/25.
//

#include <stdio.h>

int binario() {

    int bit1, bit2, bit3, bit4, decimal;
    printf("-----------------------------------------\n");
    printf("| Ingrese los 4 bits del numero binario |\n");
    printf("-----------------------------------------\n");
    printf("| se inicia de izquierda a derecha     |\n");
    printf("| solo se acepta 1 y 0                 |\n");
    printf("| ingresa el bit 1: ");
    scanf("%d",&bit1);
    printf("| ingresa el bit 2: ");
    scanf("%d",&bit2);
    printf("| ingresa el bit 3: ");
    scanf("%d",&bit3);
    printf("| ingresa el bit 4: ");
    scanf("%d",&bit4);
    printf("-----------------------------------------\n");

    if (bit1 < 0 || bit1 > 1 ||
        bit2 < 0 || bit2 > 1 ||
        bit3 < 0 || bit3 > 1 ||
        bit4 < 0 || bit4 > 1) {
        printf("solo se acepta 1 y 0\n");
        return 1;
       }
    // esto se hcae porque multiplicamos cada bit por la posicion que ocupa, desde 2 a la 0, 2 a la 1, 2 a la 2, 2 a la 3...
    decimal = (bit1 * 8) + (bit2 * 4) + (bit3 * 2) + (bit4 * 1);
    printf("El numero decimal es: %d\n", decimal);

}

int decimal() {
    int decimal, decimal1, decimal2, decimal3, decimal4, tmp;
    printf("-------------------------------------------------\n");
    printf("| Ingresa el numero decimal para pasar a binario|\n");
    printf("-------------------------------------------------\n");
    printf("| solo se acepta de 1 a 15                      |\n");
    printf("| ingresa el numero:                            |");
    scanf("%d",&decimal);
    printf("-----------------------------------------\n");

    if (decimal < 0 || decimal > 15) {
        printf("solo se acepta de 1 a 15\n");
        return 1;
    }

    /*
     * 15 / 2 = 7 % 1
     * 7 / 2 = 3 % 1
     * 3 / 2 = 1 % 1
     * 1 / 2 = 0 % 1
    */
    tmp = decimal;
    decimal1 = tmp % 2;
    tmp = tmp / 2;
    decimal2 = tmp % 2;
    tmp = tmp / 2;
    decimal3 = tmp % 2;
    tmp = tmp / 2;
    decimal4 = tmp % 2;
    printf("El numero %d en binario  es: %d %d %d %d ", decimal, decimal4, decimal3, decimal2, decimal1);
}

int main(){

    int opcion;
    printf("-----------------------------------------\n");
    printf("| Bienvenido al mundo de los numeros     |\n");
    printf("-----------------------------------------\n");
    printf("| Quieres ir al mundo decimal o binario  |\n");
    printf("| 1. Mundo binario                       |\n");
    printf("| 2. Mundo decimal                       |\n");
    printf("-----------------------------------------\n");
    printf("| A que mundo quieres ir ? (1\2)|\n");
    scanf("%d",&opcion);

    switch (opcion) {
        case 1:
            binario();
            break;
        case 2:
            decimal();
            break;
        default:
            printf("opcion no valida");
            return 1;
    }

    return 0;
 }