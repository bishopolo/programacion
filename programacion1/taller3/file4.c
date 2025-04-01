//
// Created by Jorge Echeverri on 3/31/25.
//
#include <stdio.h>

int main ( ) {

    int number ;
    float pares = 0, impares = 0, tmp;

    printf( "dame un número: " );
    scanf( "%d" , &number );
    for ( int i = 2 ; i <= number ; i ++ ){
        tmp = i ;
        if ( i % 2 == 0 ) {
            pares += ( 1 / tmp ) ;
        } else {
            impares += ( 1 / tmp ) ;
        }
    }

    printf( " el resutlado es %f " , pares - impares );
}