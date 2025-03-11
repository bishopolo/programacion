//
// Created by Jorge Echeverri on 3/10/25.
//
#include <stdio.h>

int main(){
    int edad, semanas;
    char sexo;
    printf("Ingrese su sexo: ( m | h ) ");
    scanf("%c", &sexo);
    printf("Ingrese su edad: ");
    scanf("%d", &edad);
    printf("Ingrese las semanas cotizadas: ");
    scanf("%d", &semanas);

    if (sexo != 'm' && sexo != 'h') {
        printf("Sexo invalido");
        return 0;
    }

    if (semanas >= 1300) {

        if (sexo == 'h' && edad >= 62) {
            printf("Felicidades, ya eres un hombre pensionado.\n");
        } else if (sexo == 'm' && edad >= 57) {
            printf("Felicidades, ya eres una mujer pensionada.\n");
        } else {
            if (sexo == 'h') {
                printf("Lo sentimos, aun te falta cumplir la edad requerida que es 62.\n");
            } else {
                printf("Lo sentimos, aun te falta cumplir la edad requerida que es 57.\n");
            }
        }
    }else {
        printf("todavía no puedes pensionarte, revisa si cumples la cantidad de semanas");
    }
  }