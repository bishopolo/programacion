/*
// Created by Jorge Echeverri on 3/27/25.
Escribir un programa que pida un valor de 0 a 255 y muestre el respectivo numero en
representación binaria.
*/

#include <stdio.h>

int main(){
    int number = 0, tmp = 0, total[8];
    printf("10101010101010101010101010101010101010101010\n");
    printf("1 \tingresa un número entre 0 y 255    1\n");
    printf("10101010101010101010101010101010101010101010\n");
    scanf("%d", &number);
    if (number < 0 || number > 255){return printf("Error, solo valores entre 0 y 255");}

    tmp = number;

    printf("128\t64\t32\t16\t8\t4\t2\t1\n");
    int valor = 128; // Empezamos con el bit más significativo (2^7)
    for (int i = 0; i < 8; i++) { // 8 bits para 0-255
        if (number >= valor) {
            printf("1\t");
            number -= valor;
        } else {
            printf("0\t");
        }
        valor /= 2; // Dividimos por 2 para el siguiente bit
    }
    // for (int i = 1; i <= 8; i++) {
    //     total[i - 1] = tmp % 2;
    //     // printf("\n%d", tmp % 2);
    //     tmp = tmp / 2;
    // }
    //
    // for (int i = 7; i >= 0; i--) {
    //    printf("%d\t", total[i]);
    // }



 }