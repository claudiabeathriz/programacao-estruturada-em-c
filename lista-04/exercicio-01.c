// 1. Escreva um programa em C para ler um vetor X de 10 elementos inteiros. Logo após copie os
// elementos do vetor X para um vetor Y fazendo com que o 1o. elemento de X seja copiado para o
// 10o. de Y, o 2o. de X para o 9o. de Y e assim sucessivamente. Após o término da cópia, imprimir o
// vetor Y.

#include <stdio.h>

int main(){

    int X[10], Y[10];

    for(int i = 0; i < 10; i++){
        printf("Informe o %dº elemento do vetor X: ", i + 1);
        scanf("%d", &X[i]);
    }

    for(int i = 0; i < 10; i++){
        Y[9 - i] = X[i];
    }

    printf("Vetor Y: ");
    for(int i = 0; i < 10; i++){
        printf("%d ", Y[i]);
    }

    return 0;
}