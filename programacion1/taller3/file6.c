//
// Created by Jorge Echeverri on 3/31/25.
//
// #include <conio.h>
#include <stdio.h>

int main(void) {

    int mayus = 0, minus = 0, espacios = 0;
    char letra;
    printf("ingresa un caracter, solo letras y espacios \nsi quieres salir presiona ESC ");

    do{

        letra = getchar();
        //        printf("el caracter es %c su valor ascii es %i", letra, letra);

        if (letra >= 47 && letra <= 57){
            return printf("no puedes ingresar números\n");
        }

        if (letra == 32){
            espacios++;
        }

        if (letra >= 65 && letra <= 90){
            mayus++;
        }

        if (letra >= 97 && letra <= 122){
            minus++;
        }
    } while (letra != 27);

    printf("ingresaste \n%d letras mayúsculas\n%d letras minúsculas\n%d espacios\n", mayus, minus, espacios);
}


// version que no funciona
/*
#include <stdio.h>
#include <conio.h>

int main(void) {
    int mayus = 0, minus = 0, espacios = 0;
    char letra;

    printf("Ingresa caracteres (letras o espacios). Presiona ESC para salir.\n");

    do {
        letra = getche();

        if (letra == 27) {
            break;
        }

        if (letra >= '0' && letra <= '9') {
            printf("\nNo puedes ingresar números. Intenta de nuevo.\n");
            continue;
        }

        if (letra == ' ') {
            espacios++;
        } else if (letra >= 'A' && letra <= 'Z') {
            mayus++;
        } else if (letra >= 'a' && letra <= 'z') {
            minus++;
        }
    } while (1);

    printf("\n\nIngresaste:\n");
    printf("%d letras mayúsculas\n", mayus);
    printf("%d letras minúsculas\n", minus);
    printf("%d espacios\n", espacios);

    return 0;
}

*/
