// 5. Implemente a função max_vet, que recebe como parâmetro um vetor de números de ponto
//   flutuante (vet) de tamanho n e retorna o maior número armazenado nesse vetor. Essa função deve
//   obedecer o protótipo: float max_vet (int n, float * vet);
//   Faça também a função main.

#include <stdio.h>

float max_vet(int n, float *vet) {
    float max = vet[0];

    for (int i = 1; i < n; i++) {
        if (vet[i] > max) {
            max = vet[i];
        }
    }

    return max;
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    float vet[n];
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &vet[i]);
    }

    float max = max_vet(n, vet);
    printf("O maior numero no vetor e: %.2f\n", max);

    return 0;
}