// 11. Faça um algoritmo para ler dois números inteiros e calcular e mostrar o valor
//    resultante se elevarmos a base representada pelo primeiro à potência representada pelo
//    segundo. Dica: busque qual a função que faz a potenciação.

#include <stdio.h>
#include <math.h>

int main() {
    int base, expoente, resultado;

    printf("Digite a base (número inteiro): ");
    scanf("%d", &base);

    printf("Digite o expoente (número inteiro): ");
    scanf("%d", &expoente);

    resultado = pow(base, expoente);

    printf("%d elevado a %d é: %lld\n", base, expoente, resultado);

    return 0;
}