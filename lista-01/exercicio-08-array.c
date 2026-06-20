// resolucao exercicio 08 usando array

#include <stdio.h>

int total_de_notas(int valor);

int main(){
    
    int valor;

    printf("Digite o valor em reais: ");
    scanf("%d", &valor);

    int totalNotas = total_de_notas(valor);
    printf("Total de notas: %d\n", totalNotas);

    return 0;
}

int total_de_notas(int valor) {
    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    int totalNotas = 0;

    for (int i = 0; i < sizeof(notas)/sizeof(notas[0]); i++) {
        totalNotas += valor / notas[i];
        valor = valor % notas[i];
    }

    return totalNotas;
}