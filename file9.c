//
// Created by Jorge Echeverri on 3/11/25.
//
#include <stdio.h>

int main() {
    int numero = 0b10101010; // Valor inicial en binario
    int mascara = 0b00110000; // Máscara para leer los bits 4 y 5

    // Aplicar la máscara para leer los bits 4 y 5
    int bits_leidos = numero & mascara;

    // Desplazar los bits leídos a la derecha para obtener su valor
    bits_leidos = bits_leidos >> 4;

    printf("Valor de los bits 4 y 5: %d\n", bits_leidos);

    return 0;
}
