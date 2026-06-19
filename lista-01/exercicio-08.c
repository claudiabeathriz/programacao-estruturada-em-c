// 8. Considerando a existência de notas (cédulas) nos valores 
// R$ 100, R$ 50, R$ 20, R$ 10, R$ 5, R$ 2 e R$ 1,
// escreva um programa que capture um valor inteiro em reais (R$) 
// e determine o menor número de notas para se
// obter o montante fornecido. A função deve ter o seguinte protótipo:
// int total_de_notas(int valor);

#include <stdio.h>

int total_de_notas(int valor);

int main() {
    int valor;

    printf("Digite o valor em reais: ");
    scanf("%d", &valor);

    int totalNotas = total_de_notas(valor);
    printf("Total de notas: %d\n", totalNotas);

    return 0;
}

int total_de_notas(int valor) {
    int totalNotas = 0;
    int resto = valor;

    totalNotas += resto / 100;
    resto = resto % 100;

    totalNotas += resto / 50;
    resto = resto % 50;

    totalNotas += resto / 20;
    resto = resto % 20;

    totalNotas += resto / 10;
    resto = resto % 10;

    totalNotas += resto / 5;
    resto = resto % 5;

    totalNotas += resto / 2;
    resto = resto % 2;

    totalNotas += resto / 1;

    return totalNotas;
}