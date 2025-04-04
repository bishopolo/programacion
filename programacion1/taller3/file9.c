#include <stdio.h>

int main() {

  int number;
  printf("dame un número para hacer el triangulo: ");
  scanf("%d", &number);

  for (int i = 1; i <= number; i++) {
    for (int j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }

  for (int i = number - 1; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }

}