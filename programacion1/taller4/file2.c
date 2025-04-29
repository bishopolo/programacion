#include <stdio.h>
#include <math.h>

/*
 *la media es la multiplicación de todos los números ingresados
 *luego se saca la raiz enésima de la multiplicación, es decir la cantidad
 *de números ingresados, esa es la raiz que sacamos, en este caso 2
 *luego para sacar esa raiz es muy fácil, solo es elevar el número a 1/2, en este
 *caso es 2 porque es la cantidad de números ingresados, pero si ingresan 4 por ejemplo
 *sería 1/4
 */

float mediaGeometrica(float num1, float num2) {
  float multiplication = num1 * num2;
  return pow(multiplication, 1.0/2.0);
}

int main() {
  float num1, num2;
  puts("ingresa el 1er numero: ");
  scanf("%f", &num1);
  puts("ingresa el 2do numero: ");
  scanf("%f", &num2);
  printf("la media geometrica de %.f y %.f es -> %.2f",num1, num2, mediaGeometrica(num1, num2) );
}