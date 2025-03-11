//
// Created by Jorge Echeverri on 3/2/25.
//

#include <stdio.h>


int main() {
    int min1, max1, min2, max2, inicio, fin;
    printf("dame los dos valores min y max de la primera intersección: \n");
    printf("Ingrese el valor de min: ");
    scanf("%i", &min1);
    printf("Ingrese el valor de max: ");
    scanf("%i", &max1);
    printf("dame los dos valores min y max de la segunda intersección: \n");
    printf("Ingrese el valor de min: ");
    scanf("%i", &min2);
    printf("Ingrese el valor de max: ");
    scanf("%i", &max2);

    if (min1 > min2) {
        inicio = min1;
    }else {
        inicio = min2;
    }

    if (max1 < max2) {
        fin = max1;
    }else {
        fin = max2;
    }


    if (inicio <= fin) {
        printf("el valor de la intersección es [%d, %d]", inicio, fin);
    }else {
        printf("está vacía");
    }

}