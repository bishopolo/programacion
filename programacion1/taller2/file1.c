#include <stdio.h>

/*   -
   / v \
 / I  R \
 --------
 R =  V / I
*/


int main(){
    float resistencia = 0, intensidad = 0, voltaje = 0;

    printf("ingresa el valor del voltaje (V): ");
    scanf("%f", &voltaje);
    printf("ingresa el valor de la corriente (I): ");
    scanf("%f", &intensidad);

    if (intensidad <= 0) {
        return printf("La resistencia es infinita");
    }
    resistencia = voltaje / intensidad;
    printf("La resistencia es: %.2f ohmios", resistencia);
}