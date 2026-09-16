// Tendo o código abaixo, escreva as funções troca, imprime e novoPonto.

// O que você precisa entender:
// Passagem por referência (&) para alterar variáveis originais de escopos diferentes.
// O operador de desreferenciação * para acessar o valor guardado no endereço apontado pelo ponteiro.
// Alocação dinâmica de memória com malloc e o uso do operador seta (->) para acessar campos 
// de structs através de ponteiros.

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x, y, z;
} Ponto;

// (1) Função troca: recebe dois ponteiros e troca seus conteúdos de lugar
void troca(Ponto *p1, Ponto *p2) {
    Ponto tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

// (2) Função imprime: recebe um ponteiro para Ponto e exibe suas coordenadas
void imprime(Ponto *p) {
    printf("(%d, %d, %d)\n", p->x, p->y, p->z);
}

// (3) Função novoPonto: aloca dinamicamente um Ponto, inicializa e retorna seu endereço
Ponto* novoPonto(int x, int y, int z) {
    Ponto *novo = (Ponto*) malloc(sizeof(Ponto));
    if (novo == NULL) {
        printf("Erro de alocação!\n");
        exit(1);
    }
    novo->x = x;
    novo->y = y;
    novo->z = z;
    return novo;
}

int main(void) {
    Ponto p1 = {2, 4, 6}, p2 = {5, 7, 9}, *p3;
    
    troca(&p1, &p2);
    imprime(&p1);
    imprime(&p2);
    
    p3 = novoPonto(1, 3, 5);
    imprime(p3);
    
    free(p3); // Boa prática: liberar a memória alocada
    return 0;
}