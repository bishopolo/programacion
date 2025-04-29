/*
 Created by Jorge Echeverri on 3/27/25.
Escribir un programa que pida un valor entero positivo y el programa muestre una cuenta
regresiva desde dicho valor hasta 0.

*/

#include <stdio.h>

int main(){
 int number = 0;
 printf("====================================\n");
 printf("= ingresa un número entre 1 y 100  =\n");
 printf("====================================\n");
 scanf("%d", &number);
 if (number > 100 || number < 1){ return printf("solo números entre 1 y 100");}

 printf("cuenta regresiva desde %d hasta 0 \n", number);
 for (int i = number; i >= 0; i--){
  printf("%d\n", i);
 }
}

