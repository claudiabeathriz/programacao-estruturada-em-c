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

    return 0;
}

void isPrime(int num) {
    bool primo = true;

    if (num <= 1) {
        primo = false; // numeros menores ou iguais a 1 nao sao primos
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                primo = false; // encontrou um divisor, nao primo
                break;
            }
        }
    }

    if (primo) {
        printf("NUMERO PRIMO\n");
    } else {
        printf("NUMERO NAO PRIMO\n");
    }
}