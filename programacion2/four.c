#include <stdio.h>

int contarCaracteres(char str[], char caracter);

int main() {

    char str[50];
    char caracter;
    printf("Ingresa tu frase favorita! \n");
    fgets(str, sizeof(str), stdin);
    //scanf("%[^\n]s", str);
    printf("Ingresa el caracter que deseas contar en la frase: \n");
    scanf(" %c", &caracter);
    contarCaracteres(str, caracter);
}


int contarCaracteres(char str[], char caracter) {
    int contador = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == caracter) {
            contador++;
        }
    }
    printf("El caracter '%c' aparece %d veces en la frase.\n", caracter, contador);
    return contador;
}
