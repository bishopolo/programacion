#include <stdio.h>

#define MAX_NOMBRE 15
void registrarCandidatos(char candidatos[][MAX_NOMBRE], int cantidad);
void imprimirCandidatos(char candidatos[][MAX_NOMBRE], int cantidad);
void votar(int votos[], int cantidad, char candidatos[][MAX_NOMBRE], int votantes);
void resultado(int votos[], int cantidad, char candidatos[][MAX_NOMBRE]);

int main() {

    int cantidadCandidatos, votantes;
    puts("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
    puts("@\t\tRegistra los candidatos\t \t  @");
    puts("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
    printf("Ingrese el # de candidatos (máximo 10): ");
    scanf("%d", &cantidadCandidatos);
    if (cantidadCandidatos > 10) {
        printf("Error: El número máximo de candidatos es 10.\n");
        return 1;
    }
    char candidatos[cantidadCandidatos][MAX_NOMBRE];
    registrarCandidatos(candidatos, cantidadCandidatos);
    printf("Digite la cantidad de votantes habilitados: ");
    scanf("%d", &votantes);
    int votos[cantidadCandidatos];
    votar(votos, cantidadCandidatos, candidatos, votantes);
    puts("Resumen de votación:");
    resultado(votos, cantidadCandidatos, candidatos);
}

void registrarCandidatos(char candidatos[][MAX_NOMBRE], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        printf("dame el nombre para el candidato %d: ", i + 1);
        scanf("%s", candidatos[i]);
    }
    printf("Registrado con éxito los candidatos\n");
}

void imprimirCandidatos(char candidatos[][MAX_NOMBRE], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        printf("[%d. %s]", i + 1, candidatos[i]);
    }
}

void votar(int votos[], int cantidad, char candidatos[][MAX_NOMBRE], int votantes) {
    for (int i = 0; i < cantidad; i++) {
        votos[i] = 0;
    }

    for (int i = 0; i < votantes; i++) {
        printf("voto %d para (", i + 1);
        imprimirCandidatos(candidatos, cantidad);
        printf("): ");

        int opcion;
        scanf("%d", &opcion);
        votos[opcion-1]++;
    }
}

void resultado(int votos[], int cantidad, char candidatos[][MAX_NOMBRE]) {

    for (int i = 0; i < cantidad; i++) {
        printf("Candidato %s: %d votos\n", candidatos[i], votos[i]);
    }

}
