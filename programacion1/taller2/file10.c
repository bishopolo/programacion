//
// Created by Jorge Echeverri on 3/20/25.
//
#include <stdio.h>
int main(){

  // for (int i=1; i <= 128; i = i <<1){
  //      printf("%d\n", i);
  // }
  //
  //    printf("++++++++++++++++++++ \n");
  // for (int i=128; i >= 1; i = i >>1){
  //      printf("%d\n", i);
  // }

    int number, tmp;
    int aux[8];
    printf("ingresa un número entre 0 y 255: ");
    scanf("%d", &number);
    if (number < 0 || number > 255)return printf("solo número entre 0 y 255");

        tmp = number;
    printf("128\t64\t32\t16\t8\t4\t2\t1\n");
    for (int i = 1; i < 9; i++) {
        // printf("%d", tmp % 2);
        aux[i - 1]=tmp % 2;
        tmp = tmp/ 2;
    }
    for (int i = 7; i >= 0; i--) {
        printf("%d \t", aux[i]);
    }
 }
