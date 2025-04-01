#include <stdio.h>

int main() {
    int numero = 0b10101010; // Valor inicial en binario
    int mascara = 0b00001100; // Máscara para modificar los bits 2 y 3
    int nuevos_bits = 0b00000110; // Nuevos valores para los bits 2 y 3

    // Limpiar los bits 2 y 3
    numero = numero & ~mascara;

    // Establecer los nuevos valores para los bits 2 y 3
    numero = numero | (nuevos_bits & mascara);

    printf("Valor después del enmascaramiento de escritura: %d\n", numero);

    return 0;
}
