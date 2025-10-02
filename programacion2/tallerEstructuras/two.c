#include <stdio.h>
#include <string.h>


typedef  struct {
    char nombre[50];
    char apellidos[50];
    char genero; // 'M' para mujer, 'H' para hombre
    int edad;
    float altura;
} Cedula;

int posMenorNombre(Cedula personas[], int tam, int ps);
void mostrardDatos(Cedula data[], int tam);
int busquedaBinaria(Cedula personas[], int n, char nombreBuscado[]);
void mostrarResultado(Cedula personas[], int posicion);

int main() {
    int cantidadPersonas;
    printf("Ingrese el numero de personas a registrar: ");
    scanf("%d", &cantidadPersonas);
    Cedula personas[cantidadPersonas];

    for (int i = 0; i < cantidadPersonas; i++) {
        puts("==============================");
        printf("Persona %d\n Nombre: ", i + 1);
        scanf("%49s", personas[i].nombre);
        printf(" Apellidos: ");
        scanf("%49s", personas[i].apellidos);
        printf(" Género (H/M): ");
        scanf(" %c", &personas[i].genero);
        printf(" Edad: ");
        scanf("%d", &personas[i].edad);
        printf(" Altura (en metros): ");
        scanf("%f", &personas[i].altura);
        puts("==============================");
        printf("\n");
    }

    printf("\n--- Datos Registrados ---\n");
    mostrardDatos(personas, cantidadPersonas);


    printf("\nOrdenando alfabéticamente por nombre...\n");
    printf("Ordenamiento completado!\n");

    for(int i = 0; i < cantidadPersonas; i++) {
        int posNum = posMenorNombre(personas, cantidadPersonas, i);
        if(posNum != i) {
            Cedula tmp = personas[posNum];
            personas[posNum] = personas[i];
            personas[i] = tmp;
        }
    }
    mostrardDatos(personas, cantidadPersonas);

    char nombreBuscado[50];
    puts("==============================");
    puts("Ingresa el nombre de la persona a buscar");
    scanf("%49s", nombreBuscado);
    puts("==============================");
    printf("Iniciando búsqueda binaria de: '%s'\n", nombreBuscado);

    int posicion = busquedaBinaria(personas, cantidadPersonas, nombreBuscado);
    mostrarResultado(personas, posicion);

}


int posMenorNombre(Cedula personas[], int tam, int ps) {
    char menorNombre[50];
    strcpy(menorNombre, personas[ps].nombre);  // nombre menor, asumimos que es el primero
    int pm = ps;

    for(int i = ps; i < tam; i++) {
        if(strcmp(personas[i].nombre, menorNombre) < 0) {
            strcpy(menorNombre, personas[i].nombre);
            pm = i;
        }
    }
    return pm;
}


void mostrardDatos(Cedula data[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("Nombre: %s\n", data[i].nombre);
        printf("Apellidos: %s\n", data[i].apellidos);
        printf("Género: %c\n", data[i].genero);
        printf("Edad: %d\n", data[i].edad);
        printf("Altura: %.2f metros\n", data[i].altura);
        printf("-------------------------\n");
    }
}

int busquedaBinaria(Cedula personas[], int n, char nombreBuscado[]) {
    int izq = 0;           // Inicio del array
    int der = n - 1;       // Final del array

    while (izq <= der) {   // Mientras haya elementos por revisar

        // 1. Calcular el punto medio
        int medio = (izq + der) / 2;

        // 2. Comparar con el elemento del medio
        int comparacion = strcmp(personas[medio].nombre, nombreBuscado);

        // 3. Decidir qué hacer:
        if (comparacion == 0) {
            return medio;        // ¡Encontrado! Retornamos la posición
        }
        else if (comparacion < 0) {
            izq = medio + 1;     // Buscar en la mitad DERECHA
        }
        else {
            der = medio - 1;     // Buscar en la mitad IZQUIERDA
        }
    }

    return -1;  // No encontrado
}


void mostrarResultado(Cedula personas[], int posicion) {
    if (posicion != -1) {
        printf("\n╔════════════════════════════╗\n");
        printf("║   PERSONA ENCONTRADA ✓       ║\n");
        printf("╚══════════════════════════════╝\n");
        printf("Nombre: %s %s\n", personas[posicion].nombre,
               personas[posicion].apellidos);
        printf("Género: %c\n", personas[posicion].genero);
        printf("Edad: %d años\n", personas[posicion].edad);
        printf("Altura: %.2f m\n", personas[posicion].altura);
    } else {
        printf("\n╔═══════════════════════════╗\n");
        printf("║   PERSONA NO ENCONTRADA ✗   ║\n");
        printf("╚═════════════════════════════╝\n");
    }
}