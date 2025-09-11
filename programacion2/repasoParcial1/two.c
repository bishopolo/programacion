#include <stdio.h>
#include <string.h>

int main() {
    int cantidadPersonas, contadorMujer = 0, contadorHombres = 0;
    printf("Ingrese el numero de personas a registrar: ");
    scanf("%d", &cantidadPersonas);
    char informacion[cantidadPersonas][21];

    for (int i = 0; i < cantidadPersonas; i++) {
        printf("Persona %d - Nombre: ", i+1);
        scanf("%19s", informacion[i]);

        printf("Género (H/M): ");
        scanf(" %c", &informacion[i][20]);
    }

    printf("\n--- Datos ---\n");
    for (int i = 0; i < cantidadPersonas; i++) {
        char titulo[20] = "";
        if (informacion[i][20] == 'M' || informacion[i][20] == 'm') {
            strcpy(titulo, "Bienvenida señora");
            contadorMujer++;
        } else if (informacion[i][20] == 'H' || informacion[i][20] == 'h') {
            strcpy(titulo, "Bienvenido señor");
            contadorHombres++;
        }
        printf("%s %s, Género: %c\n", titulo, informacion[i], informacion[i][20]);
    }

    printf("Total mujeres: %d\n", contadorMujer);
    printf("Total hombres: %d\n", contadorHombres);

    return 0;
}