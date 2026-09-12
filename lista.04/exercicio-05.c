// 5. Desde março deste ano, os 33 táxis da cidade de Rio das Ostras tiveram que instalar a aferir
// taxímetros para o cálculo do valor das corridas. De acordo com a tabela em vigor, a tarifa inicial
// (ou bandeirada) custa R$4,95. Além disso, para cada quilômetro percorrido são cobrados mais
// R$2,50, na bandeira 1, ou R$3,00, na bandeira 2. Escreva uma função em C que calcula os valores
// da corrida de táxi em Rio das Ostras. A função recebe como parâmetros o valor real dist,
// correspondendo à distância percorrida pelo táxi (em quilômetros), e os ponteiros b1 e b2,
// indicando os endereços onde devem ser armazenados, respectivamente, os valores calculados
// para a corrida na bandeira 1 e na bandeira 2.
// void calcula_corrida(float dist, float *b1, float *b2);

#include <stdio.h>

void calcula_corrida(float dist, float *b1, float *b2) {
    const float bandeirada = 4.95;
    const float tarifa_b1 = 2.50;
    const float tarifa_b2 = 3.00;

    *b1 = bandeirada + (tarifa_b1 * dist);
    *b2 = bandeirada + (tarifa_b2 * dist);
}

int main() {
    float dist, v_b1, v_b2;

    printf("Digite a distância percorrida (em km): ");
    scanf("%f", &dist);

    calcula_corrida(dist, &v_b1, &v_b2);

    printf("Valor da corrida na bandeira 1: R$%.2f\n", v_b1);
    printf("Valor da corrida na bandeira 2: R$%.2f\n", v_b2);

    return 0;
}