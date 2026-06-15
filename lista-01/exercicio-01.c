// 1. Fazer um programa para receber um número inteiro de segundos do
// usuário e imprimir a quantidade correspondente em horas, minutos e segundos.

#include <stdio.h>

int main() {
    int total;

    printf("Informe um número inteiro de segundos: \n");
    scanf("%d", &total);

    int horas = total / 3600;
    int minutos = (total % 3600) / 60;
    int segundos = total % 60;

    printf("Quantidade em horas: %d, \nQuantidade em minutos: %d, \nQuantidade em segundos: %d \n", horas, minutos, segundos);

return 0;
}