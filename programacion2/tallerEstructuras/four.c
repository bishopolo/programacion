#include <stdio.h>
#include <string.h>

typedef struct {
    char nombre[30];
    char telefono[15];
    char email[50];
}Contacto;

int indiceContacto(Contacto contactos[], int tam, char telBuscado[]);

int main() {
    int nContactos;
    printf("Ingrese el numero de contactos a registrar: ");
    scanf("%d", &nContactos);
    Contacto contactos[nContactos];
    for(int i = 0; i < nContactos; i++) {
        printf("Contacto %d\n - Nombre: ", i + 1);
        scanf("%29s", contactos[i].nombre);
        printf(" - Telefono: ");
        scanf("%14s", contactos[i].telefono);
        printf(" - Email: ");
        scanf("%49s", contactos[i].email);
    }

    char telBuscado[15];
    puts("==============================");
    puts("Ingresa el telefono a buscar");
    scanf("%s", telBuscado);
    puts("==============================");
    printf("Iniciando búsqueda para el telefono: '%s'\n", telBuscado);

    int posicion = indiceContacto(contactos, nContactos, telBuscado);


    if (posicion != -1) {
        printf("\n╔══════════════════════════╗\n");
        printf("║   CONTACTO ENCONTRADA ✓     ║\n");
        printf("╚════════════════════════════╝\n");
        printf("Encontrado en la posicion >>> %d <<<\n", posicion);
        printf("Nombre: %s\n", contactos[posicion].nombre);
        printf("Telefono: %s\n", contactos[posicion].telefono);
        printf("Email: %s \n", contactos[posicion].email);
    } else {
        printf("\n╔═══════════════════════════╗\n");
        printf("║   CONTACTO NO ENCONTRADA ✗   ║\n");
        printf("╚═════════════════════════════╝\n");
    }
}


int indiceContacto(Contacto contactos[], int tam, char telBuscado[]) {
    for(int i = 0; i < tam; i++) {
        if(strcmp(contactos[i].telefono, telBuscado) == 0) {
            return i; // Retorna la posición si se encuentra
        }
    }
    return -1; // Retorna -1 si no se encuentra
}