// 1. Implemente a função calcula_circulo, que calcula a área e a circunferência de um círculo de raio
//   r. Essa função deve obedecer o protótipo:
//   void calc_circulo(float r, float *circunferencia, float *area);
//   Fórmulas:
//   A = π r^2 ; c = 2 π r ; π = 3.14159265
//   Note que essa passagem dos 2 últimos parâmetros é uma passagem por referência.

#include <stdio.h>
#include <math.h>

#define PI 3.14159265

void calc_circulo(float r, float *circunf, float *area) {
    *area = PI * r * r;
    *circunf = 2 * PI * r;
}

int main() {
    float raio, area, circunf;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    calc_circulo(raio, &circunf, &area);

    printf("Área do círculo: %.2f\n", area);
    printf("Circunferência do círculo: %.2f\n", circunf);

    return 0;
}