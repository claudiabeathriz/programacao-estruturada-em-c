// 5. Implemente uma função que receba como parâmetros um vetor de números inteiros v e seu
// comprimento n, e verifique se os elementos do vetor correspondem aos termos de uma PA
// (Progressão Aritmética), isto é, se existe um número inteiro k tal que v[i]=v[0]+k*i. Caso os
// elementos do vetor correspondam aos termos de uma PA, a função deve retornar o valor
// calculado para k. Por exemplo, se for passado para essa função o vetor {2,10,18,26,34} a função
// deve retornar o valor 8. Caso o vetor não corresponda a uma PA, a função deve retornar o valor 0.
// Assuma que o vetor sempre terá pelo menos 3 elementos. Essa função deve ter o seguinte
// protótipo:
// int testa_PA(int n, int* v)

#include <stdio.h>

int testa_PA(int n, int*v);

int main(){
    int k, n;

    printf("Informe o tamanho do vetor (n >= 3):\n");
    scanf("%d", &n);

    int v[n];
    printf("Informe os elementos do vetor:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    k = testa_PA(n, v);
    if(k != 0){
        printf("O vetor corresponde a uma PA com razao k = %d\n", k);
    }else{
        printf("O vetor nao corresponde a uma PA\n");
    }
    return 0;
}

int testa_PA(int n, int* v){
    int k = v[1] - v[0]; // calcula a razão da PA
    for(int i = 2; i < n; i++){
        // verifica se a diferença entre elementos consecutivos é igual a k, a partir do terceiro elemento
        if(v[i] - v[i-1] != k) return 0;
    }
    return k;
}