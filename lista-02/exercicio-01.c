// 1. Faça um programa que verifique se um determinado número é primo.
// O número a ser testado deve ser fornecido pelo usuário do programa.
// O programa deve imprimir a mensagem “NUMERO PRIMO” 
// caso o número seja primo, e “NUMERO NAO PRIMO” caso contrário.

#include <stdio.h>
#include <stdbool.h>

void isPrime(int num);

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    isPrime(num);
}

void isPrime(int num) {
    int i = 1;
    bool isPrime = true;

    if (num <= 1) {
        isPrime = false; // numeros menores ou iguais a 1 nao sao primos
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false; // encontrou um divisor, nao primo
                break;
            }
        }
    }

    if (isPrime) {
        printf("NUMERO PRIMO\n");
    } else {
        printf("NUMERO NAO PRIMO\n");
    }
}