#include <stdio.h>

/*
 *el producto punto es la suma de los productos de los elementos, pero uno del vector a por uno
 *del vertor b x1*x2 + y1*y2
 */

int productoPunto(int x1, int y1, int x2, int y2) {
  return (x1 * x2) + (y1 * y2);
}

int main() {
  int x1, y1, x2, y2;
  puts("ingresa los valores para el primer vector (x1 y1): ");
  scanf("%d %d", &x1, &y1);
  puts("ingresa los valores para el segundo vector (x2 y2): ");
  scanf("%d %d", &x2, &y2);
  printf("el producto punto es -> %d\n", productoPunto(x1, y1, x2, y2));

}