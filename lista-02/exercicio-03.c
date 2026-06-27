// 3. Faça um programa que imprima os n primeiros termos da série de Fibonacci,
// lembrando que esta série é definida da seguinte forma:
//   termo1 = 1
//   termo2 = 1
//   termon = termon−1 + termon−2
//   O usuário do programa deve fornecer o número de termos, e estes devem ser impressos
//   separados por um espaço. Por exemplo, se o usuário pedir os 6 primeiros termos da série
//   de Fibonacci, o programa deve ter a seguinte saída:
//   1 1 2 3 5 8

#include <stdio.h>

void printFibonacci(int n);

int main() {
    int n;
    printf("Digite quantos termos da série de Fibonacci deseja imprimir: ");
    scanf("%d", &n);

    printFibonacci(n);
    return 0;
}

void printFibonacci(int n) {
    int termo;
    int termo1 = 1, termo2 = 1;

    if (n >= 1) {
        printf("%d ", termo1);
    }
    if (n >= 2) {
        printf("%d ", termo2);
    }

    for (int i = 3; i <= n; i++) {
        termo = termo1 + termo2;
        printf("%d ", termo);
        termo1 = termo2;
        termo2 = termo;
    }
    printf("\n");
}