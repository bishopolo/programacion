//
// Created by Jorge Echeverri on 3/11/25.
//
#include <stdio.h>

int main(){
    int opcion;
    float medida, metro, centimetro, pie, pulgada;
    printf("++++++++++++++++++++++++++++++++++++\n");
    printf("++++ \tconversor de unidades\t++++\n");
    printf("++++++++++++++++++++++++++++++++++++\n");
    printf("+ Escoge la unidad y da su  valor  +\n+ para verlas en pies, metros,\t   +\n+ centimetros y pulgadas\t       +\n");
    printf("++++++++++++++++++++++++++++++++++++\n");
    printf("+ 1. metros                        +\n");
    printf("+ 2. centimetros                   +\n");
    printf("+ 3. pulgadas                      +\n");
    printf("+ 4. pie                           +\n");
    printf("++++++++++++++++++++++++++++++++++++\n");
    printf("+  escoge la unidad de tu medida: ");
    scanf("%i", &opcion);
    printf("+  escribe el valor de tu medida: ");
    scanf("%f", &medida);
    printf("++++++++++++++++++++++++++++++++++++\n");

    if (opcion < 1 || opcion > 5) {
        printf("Opcion incorrecta");
        return 1;
    }
    //voy a convertir todas las medidas a metros para poder trabjar mas facil con ellas  y no hacer tantos cálculos

    switch (opcion) {
        case 1:
            metro = medida;
            break;
        case 2:
            metro = medida / 100;
            break;
        case 3:
            //pulgadas en cm son 2.54 y para pasarla a metros es 2.54 /100
            metro  = medida * 0.0254;
            break;
        case 4:
            // pie también es una medida imperial igual que pulgada, pie depende de pulgada por lo que un pie es igual a 12 pulgadas, 12 * 2.54 = 30.48 centimetros, y para pasar a metros es 30.48/100 = 0.3048
            metro = medida * 0.3048;
            break;
    }


    centimetro = metro * 100;
    // para convertir metro a pulgada lo que haces es dividir 1 / 0.0254 = 39.37
    pulgada = metro * 39.37 ;
    //para convertir metro a pie lo que haces es dividir 1 / 0.3048 = 3.280
    pie = metro * 3.280;

    printf("+ tu medida de %.2f ", medida);
    switch (opcion) {
        case 1:
            printf(" metros ");
        break;
        case 2:
            printf(" centimetros ");
        break;
        case 3:
            printf(" pulgadas ");
        break;
        case 4:
            printf(" pies ");
        break;
    }
    printf("\n+ en metros es %.2fm\n+ en centimetros es %.2fcm\n+ en pulgadas es %.2f \n+ en pies es %.2f\n", metro, centimetro, pulgada, pie);
    printf("++++++++++++++++++++++++++++++++++++\n");

    return 0;
}
