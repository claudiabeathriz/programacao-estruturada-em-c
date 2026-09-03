#include <stdio.h>
#include <stdlib.h>

// 1. Fazer um programa para receber um número inteiro de segundos do usuário e imprimir
// a quantidade correspondente em horas, minutos e segundos.

int main()
{
    int totalSegundos;

    printf("Informe o total de segundos: ");
    scanf("%d", &totalSegundos);

    int horas = totalSegundos/3600;
    int minutos = (totalSegundos%3600)/60; //queremos o resto das horas, e então converter para minutos
    int segundos = totalSegundos%60;

    printf("%d hora(s), %d minuto(s) e %d segundo(s).", horas, minutos, segundos);
}
