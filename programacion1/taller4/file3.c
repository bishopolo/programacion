#include <stdio.h>

float resistencias(int resis1, int resis2, char estado) {
  if (estado == '0') {
    return (resis1 + resis2);
  } else {
    return (float)(resis1 * resis2) / (resis1 + resis2);
    // return 1/((1.0/resis1) + (1.0/resis2));
  }
}

int main() {
  int resis1 = 0, resis2 = 0;
  char estado;
  puts("ingresa la resistencia 1: ");
  scanf("%d", &resis1);
  puts("ingresa la resistencia 2: ");
  scanf("%d", &resis2);
  puts("ingresa el estado (0 para serie, 1 para paralelo): ");
  scanf(" %c", &estado);

  if (estado != '0' && estado != '1') {
    puts("estado invalido, debe ser 0 o 1, por defecto se pondrá 0 (serie)");
    estado = '0';
  }

  printf("la resistencia total es -> %.2fΩ\n", resistencias(resis1, resis2, estado));

  return 0;
}