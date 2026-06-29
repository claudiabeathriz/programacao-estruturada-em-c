// 5. Escreva um programa em C para ler um valor X e um valor Z (se Z for menor que X
//   deve ser lido um novo valor para Z). Contar quantos números inteiros devemos somar em
//   sequência (a partir do X inclusive) para que a soma ultrapasse a Z o mínimo possível.
//   Escrever o valor final da contagem.
//   Exemplo:
//   X Z Resposta
//   3 20 5 (3+4+5+6+7=25)
//   2 10 4 (2+3+4+5=14)
//   30 40 2 (30+31=61)

#include <stdio.h>

int contagem(int x, int z);

int main(){
    int x, z;
    
    do{
        printf("Digite o primeiro valor (X): ");
        scanf("%d", &x);

        printf("Digite o segundo valor (Z): ");
        scanf("%d", &z);

        if (z < x) {
            printf("Z é menor que X. Digite um novo valor para Z: ");
            scanf("%d", &z);
        }
    } while (z < x);

    
    printf("O valor final da contagem é: %d\n", contagem(x, z));
    return 0;
}

int contagem(int x, int z) {
    int soma = 0;
    int contador = 0;

    while (soma <= z) {
        soma += x;
        x++;
        contador++;
    }

    return contador;
}