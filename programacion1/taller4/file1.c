#include <stdio.h>
#include <math.h>

float distancia(float x1, float y1, float x2, float y2) {
    return sqrt( pow((x2 - x1), 2)  + pow((y2 - y1), 2 ));
}

int main() {
    float x1, y1, x2, y2, x3, y3, a, b, c;

    puts("Digite las coordenadas del primer punto (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    puts("Digite las coordenadas del segundo punto (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    puts("Digite las coordenadas del tercer punto (x3 y3): ");
    scanf("%f %f", &x3, &y3);

    a = distancia(x1, y1, x2, y2);
    b = distancia(x1, y1, x3, y3);
    c = distancia(x2, y2, x3, y3);

    printf("El perímetro del triángulo es: %f\n", a + b + c);

    return 0;

}