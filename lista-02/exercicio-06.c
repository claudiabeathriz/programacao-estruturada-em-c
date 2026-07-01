// 6. Fazer um programa que sorteie um número de 0 a 100 e que permita que o usuário
//   (sem conhecer o número sorteado) tente acertar. Caso não acerte, o programa deve
//   imprimir uma mensagem informando se o número sorteado é maior ou menor que a
//   tentativa feita. Ao acertar o número, o programa deve imprimir a quantidade de tentativas
//   feitas.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeroSorteado, palpite, tentativas = 0;
    
    numeroSorteado = rand() % 101;

    printf("Tente adivinhar o número sorteado (de 0 a 100):\n");

    do {
        scanf("%d", &palpite);
        tentativas++;

        if (palpite == numeroSorteado) {
            printf("Parabéns! Você acertou o número sorteado: %d\n", numeroSorteado);
            printf("Quantidade de tentativas: %d\n", tentativas);
        } else {
            if (palpite > numeroSorteado) {
                printf("O número sorteado é menor. Tente novamente:\n");
            } else {
                printf("O número sorteado é maior. Tente novamente:\n");
            }
        }
    } while (palpite != numeroSorteado);

    return 0;
}