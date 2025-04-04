#include <stdio.h>

int main() {
  int number;
  printf("ingresa un número para saber que números perfectos hay : ");
  scanf("%d", &number);

  for (int i = 1; i <= number; i++) {
    // printf("%d \n", i);
    int total = 0;
    for (int j = 1; j <= i / 2; j++) {
      // printf("i > %d j > %d \n", i, j);
      if (i % j  == 0) {
        total += j;
      }
      // printf("%d pertenece al %d\n ", j, i);
    }
    // printf("%d \n", total);
    if (total == i) {
      printf("%d es perfecto porque su suma da %d\n", i, total);
    }
  }

}

// 6, 28, 496, 8128