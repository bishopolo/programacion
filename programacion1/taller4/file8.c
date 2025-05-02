#include <stdio.h>

/*
int esPerfecto(int num){
  int suma = 0;

  for (int i = 1; i <= num / 2; i++){
     if (num % i == 0){
       suma += i;
       printf("divisor %d\n", i);
     }
    }

    if (suma == num){
      return 1;
    } else {
      return 0;
    }
}

*/


void esPerfecto(int num) {


  for (int i = 1; i <= num; i++) {
    int suma = 0;
    for (int j = 1; j <= i / 2; j++) {

      if (i % j == 0) {
        suma += j;
      }
    }
    if (suma == i) {
      printf("El número %d \n", i);
    }
  }
}

int main() {
  int num;
  puts("Ingrese un numero para saber que números son perfectos:");
  scanf("%d", &num);
  if (num <= 0) {
    puts("El número debe ser positivo");
    return 1;
  }
  // puts("ingresa un número para saber si es perfecto");
  // scanf("%d", &num);
  //
  // printf("el número %d %s perfecto", num, esPerfecto(num) ? "es " : "no es ");
  printf("los números perfectos que hay hasta el %d son:\n", num);
  esPerfecto(num);

}