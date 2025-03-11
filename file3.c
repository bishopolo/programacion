//
// Created by Jorge Echeverri on 3/10/25.
//

#include <stdio.h>
#include <math.h>

int main() {
    float number;
    int finalNumber;
    printf("dame un número real ");
    scanf("%f", &number);
    finalNumber = round(number);
    printf("el número real | %.4f | en el tipo entero es | %d | ", number, finalNumber);
}
