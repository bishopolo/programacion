#include <stdio.h>

float divisorVoltaje(float vin, float r1, float r2) {
    return vin * (r2 / (r1 + r2));
}

int main() {
    float vin, r1, r2;
    puts("ingresa el valor del voltaje de entrada (Vin): ");
    scanf("%f", &vin);
    puts("ingresa el valor de la resistencia 1 (R1): ");
    scanf("%f", &r1);
    puts("ingresa el valor de la resistencia 2 (R2): ");
    scanf("%f", &r2);

    if (vin <= 0 || r1 <= 0 || r2 <= 0) {
        return printf("no se permiten números negativos o cero\n");
    }

    printf("el voltaje de salida es -> %.2fV\n", divisorVoltaje(vin, r1, r2));


}