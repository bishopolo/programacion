//
// Created by Jorge Echeverri on 3/31/25.
//

#include <math.h>
#include <stdio.h>

int main(){
  int opcion, contador = 0;
  float medida1, medida2;

  printf("\n--- Calculadora de Áreas ---\n");
  printf("1. Círculo\n");
  printf("2. Triángulo\n");
  printf("3. Cuadrado\n");
  printf("4. Rectángulo\n");

  while (1 == 1) {
    printf("Seleccione una figura: ");
    scanf("%d", &opcion);

    if (opcion < 1 || opcion > 4) {
       printf("Opcion invalida, solo entre 1 y 4\n");
    }

    switch (opcion) {
      case 1://circulo
        printf("Ingrese el radio: ");
        scanf("%f", &medida1);
        if (medida1 <= 0) {
          printf("Error: el radio debe ser positivo.\n");
          break;
        }
        printf("Área del círculo: %.2f\n", M_PI * medida1 * medida1 );
        contador++;
        break;

      case 2: // triangulo
        printf("Ingrese base y altura: ");
        scanf("%f %f", &medida1, &medida2);
        if (medida1 <= 0 || medida2 <= 0) {
          printf("Error: valores deben ser positivos.\n");
          break;
        }
        printf("Área del triángulo: %.2f\n", (medida1 * medida2) / 2 );
        contador++;
        break;

      case 3: //cuadrado
        printf("Ingrese el lado: ");
        scanf("%f", &medida1);
        if (medida1 <= 0) {
          printf("Error: el lado debe ser positivo.\n");
          break;
        }
        printf("Área del cuadrado: %.2f\n",  medida1 * medida1 );
        contador++;
        break;

      case 4: //rectangulo
        printf("Ingrese base y altura: ");
        scanf("%f %f", &medida1, &medida2);
        if (medida1 <= 0 || medida2 <= 0) {
          printf("Error: valores deben ser positivos.\n");
          break;
        }
        printf("Área del rectángulo: %.2f\n", medida1 * medida2 );
        contador++;
        break;

    }

    if (contador >= 4) {
      printf("Hemos calculado %d figuras, si quieres salir presiona -1, \n "
             "caso contrario presiona 1 para continuar\n", contador);
      scanf("%d", &opcion);
      if (opcion == -1) return 0;
    }


  }

}
