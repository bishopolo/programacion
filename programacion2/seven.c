#include <stdio.h>
#include <math.h>

#define N 5   // número de puntos

float calcularRecta(int x[], int y[], float resultado[]);

int main() {
    int x[N] = {1, 2, 3, 4, 5};
    int y[N] = {2, 4, 5, 4, 5};
    float resultado[2];  // resultado[0] = b, resultado[1] = m
    float r;

    r = calcularRecta(x, y, resultado);

    printf("La ecuacion de la recta es: y = %.2fx + %.2f\n", resultado[1], resultado[0]);
    printf("Coeficiente de correlacion r = %.4f\n", r);

    return 0;
}

float calcularRecta(int x[], int y[], float resultado[]) {
    int i;
    float sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0, sumY2 = 0;
    float m, b, r;

    for (i = 0; i < N; i++) {
        sumX += x[i];
        sumY += y[i];
        sumXY += x[i] * y[i];
        sumX2 += x[i] * x[i];
        sumY2 += y[i] * y[i];
    }

    m = (N * sumXY - sumX * sumY) / (N * sumX2 - sumX * sumX);
    b = (sumY - m * sumX) / N;

    resultado[0] = b;
    resultado[1] = m;

    r = (N * sumXY - sumX * sumY) /
        sqrt((N * sumX2 - sumX * sumX) * (N * sumY2 - sumY * sumY));

    return r;
}
