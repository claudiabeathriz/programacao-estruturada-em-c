// O programa abaixo faz a leitura de um arquivo "numeros.txt" contendo o seguinte conteúdo:
// 5 na primeira linha e 1 3 5 7 9 na segunda linha.
// Faça a função escreve_vetor que grava um vetor nesse mesmo formato em um arquivo chamado "saida.txt".

// O que você precisa entender:
// Manipulação de arquivos (FILE *, fopen, fclose). O modo "r" lê e o modo "w" escreve 
// (criando ou sobrescrevendo o arquivo).
// Uso de fprintf para escrever dados formatados em arquivos de texto da mesma forma
// que o printf escreve na tela.

#include <stdio.h>
#include <stdlib.h>

int* le_vetor(int *n) {
    FILE *fr; 
    int *v; 
    int i;
    
    fr = fopen("numeros.txt", "r");
    if (fr == NULL) exit(-1);
    
    fscanf(fr, "%d", n); // Lê a dimensão do vetor
    
    v = (int*) malloc(*n * sizeof(int));
    if (v == NULL) exit(1);
    
    for (i = 0; i < *n; i++) {
        fscanf(fr, "%d", &v[i]);
    }
    
    fclose(fr);
    return v;
}

// (1) Implementação da função escreve_vetor exigida pela questão
void escreve_vetor(int *v, int n) {
    FILE *fw;
    int i;
    
    fw = fopen("saida.txt", "w");
    if (fw == NULL) {
        printf("Erro ao criar o arquivo de saída!\n");
        exit(-1);
    }
    
    // Grava a dimensão 'n' na primeira linha
    fprintf(fw, "%d\n", n);
    
    // Grava os elementos do vetor na segunda linha separados por espaço
    for (i = 0; i < n; i++) {
        fprintf(fw, "%d ", v[i]);
    }
    
    fclose(fw);
}

int main() {
    int *v; 
    int n;
    
    // Criação automática do arquivo de entrada para simular o teste
    FILE *aux = fopen("numeros.txt", "w");
    fprintf(aux, "5\n1 3 5 7 9\n");
    fclose(aux);
    
    v = le_vetor(&n);
    escreve_vetor(v, n);
    
    printf("Vetor lido e reescrito com sucesso no arquivo 'saida.txt'!\n");
    
    free(v);
    return 0;
}