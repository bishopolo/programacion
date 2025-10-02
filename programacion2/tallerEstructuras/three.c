#include <stdio.h>

#define MAX_NOTA 5


typedef struct {
    char nombre[50];
    int codigo;
    float nota[MAX_NOTA];
    float definitiva;
}Estudiante;

int posMenor(Estudiante D[], int tam, int ps);
int busquedaBinaria(Estudiante estudiante[], int n, int codigoBuscado);
void mostrarResultado(Estudiante estudiante[], int posicion);

int main() {

    int nEstudiantes;
    printf("Ingrese el numero de estudiantes a registrar: ");
    scanf("%d", &nEstudiantes);
    Estudiante estudiantes[nEstudiantes];

    for(int i = 0; i < nEstudiantes; i++) {
        printf("Estudiante %d - Nombre: ", i + 1);
        scanf("%49s", estudiantes[i].nombre);
        printf(" Codigo (1 y 100): ");
        scanf("%d", &estudiantes[i].codigo);
        float sumaNotas = 0.0;
        for(int j = 0; j < MAX_NOTA; j++) {
            printf(" Nota %d: ", j + 1);
            scanf("%f", &estudiantes[i].nota[j]);
            sumaNotas += estudiantes[i].nota[j];
        }
        estudiantes[i].definitiva = sumaNotas / MAX_NOTA;
    }


    for(int i = 0; i < nEstudiantes; i++) {
        int posNum = posMenor(estudiantes, nEstudiantes, i);

        if(posNum != i) {
            // Intercambio de valores
            Estudiante tmp = estudiantes[posNum];
            estudiantes[posNum] = estudiantes[i];
            estudiantes[i] = tmp;
        }
    }

    printf("\n--- Estudiantes ordenados por codigo ---\n");
    for(int i = 0; i < nEstudiantes; i++) {
        printf(" Estudiante %d\n - Nombre: %s\n", i + 1, estudiantes[i].nombre);
        printf(" - Codigo: %d\n", estudiantes[i].codigo);
        printf(" - Nota definitiva: %.2f\n", estudiantes[i].definitiva);
    }


    int codigoBuscado;
    puts("==============================");
    puts("Ingresa el codigo del estudiante a buscar");
    scanf("%d", &codigoBuscado);
    puts("==============================");
    printf("Iniciando búsqueda binaria del codigo: '%d'\n", codigoBuscado);

    int posicion = busquedaBinaria(estudiantes, nEstudiantes, codigoBuscado);
    mostrarResultado(estudiantes, posicion);
}


int posMenor(Estudiante D[], int tam, int ps) {
    int i;
    int men = D[ps].codigo;  // Asumimos que el menor es el primero
    int pm = ps;        // Guardamos su posición

    // Buscamos si hay algún elemento menor
    for(i = ps; i < tam; i++) {
        if(D[i].codigo < men) {
            men = D[i].codigo;  // Actualizamos el menor valor
            pm = i;      // Actualizamos la posición
        }
    }

    return pm;  // Retornamos la posición del menor
}


int busquedaBinaria(Estudiante estudiante[], int n, int codigoBuscado) {
    int izq = 0;           // Inicio del array
    int der = n - 1;       // Final del array

    while (izq <= der) {   // Mientras haya elementos por revisar

        // 1. Calcular el punto medio
        int medio = (izq + der) / 2;

        // 2. Comparar con el elemento del medio
        int comparacion = estudiante[medio].codigo - codigoBuscado;

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

void mostrarResultado(Estudiante estudiante[], int posicion) {
    if (posicion != -1) {
        printf("\n╔══════════════════════════╗\n");
        printf("║   PERSONA ENCONTRADA ✓     ║\n");
        printf("╚════════════════════════════╝\n");
        printf("Nombre: %s\n", estudiante[posicion].nombre);
        printf("Codigo: %d\n", estudiante[posicion].codigo);
        printf("Nota definitiva: %.2f \n", estudiante[posicion].definitiva);
    } else {
        printf("\n╔═══════════════════════════╗\n");
        printf("║   PERSONA NO ENCONTRADA ✗   ║\n");
        printf("╚═════════════════════════════╝\n");
    }
}