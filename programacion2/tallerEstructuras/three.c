#include <stdio.h>

#define MAX_NOTA 5

typedef struct {
    char nombre[50];
    int codigo;
    float nota[MAX_NOTA];
    float definitiva;
}Estudiante;

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

}