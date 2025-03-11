//
// Created by Jorge Echeverri on 3/11/25.
//

#include <stdio.h>

int main(){
    float descuento, total, precio;
    int camisas;

    printf("Ingrese el valor de la camisa: ");
    scanf("%f", &precio);
    printf("Ingrese la cantidad de camisas a comprar: ");
    scanf("%d", &camisas);
    total = camisas * precio;

    if (camisas < 1){ printf("como mínimo debes comprar 1 camisa \n"); return 0; }

    if (camisas >=1 && camisas < 5) {
        descuento = total * 0.125;
        printf("El descuento es del 12.5%% \n");
    }
    else if (camisas >=5 && camisas < 9) {
        descuento = total * 0.20;
        printf("El descuento es del 20%% \n");
    }
    else {
        descuento = total * 0.315;
        printf("El descuento es del 31.5%% \n");
    }
    printf("El total de la compra por %i es: $%.2f sin descuento, y con el descuento de $%.2f queda un total de $%.2f", camisas, total, descuento, (total - descuento) );
}
