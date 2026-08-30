// 10. Implemente um programa que chame a função média com o seguinte protótipo:
// float media(int n, float *v)

#include <stdio.h>

float media (int n, float *v) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += v[i];
    }
    return soma / n;
}

int main() {
    printf("Informe o tamanho do vetor: ");
    int n;
    scanf("%d", &n);
    
    float v[n];
    printf("Informe os elementos do vetor: ");
    for (int i = 0; i < n; i++) {
        scanf("%f", &v[i]);
    }
    float resultado = media(n, v);
    printf("A média dos elementos do vetor é: %.2f\n", resultado);
    return 0;
}