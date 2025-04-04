#include <stdio.h>


int main() {
    int horas, minutos, segundos;
    printf("Digite las horas: ");
    scanf("%d", &horas);
    printf("Digite los minutos: ");
    scanf("%d", &minutos);
    printf("Digite los segundos: ");
    scanf("%d", &segundos);

    if (horas < 0 || horas > 23) return printf("Horas deben estar entre 0 y 23\n");
    if (minutos < 0 || minutos > 59) return printf("Minutos deben estar entre 0 y 59\n");
    if (segundos < 0 || segundos > 59) return printf("Segundos deben estar entre 0 y 59\n");

    for (int h = 0; h <= horas; h++) {
        for (int m = 0; m <= 59; m++) {
            for (int s = 0; s <= 59; s++) {
                printf("%02d:%02d:%02d\n", h, m, s);

                if (h == horas && m == minutos && s == segundos) {
                    return 0;
                }
            }
        }
    }

    return 0;
}
