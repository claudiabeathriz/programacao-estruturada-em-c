// 3. Fazer um programa que recebe um símbolo de operação do usuário (+, -, / ou *) e dois números reais.
// O programa deve retornar o resultado da operação recebida sobre estes dois números.
 
#include <stdio.h>

float retornarResultado(int a, int b, char c);

int main() {
    int a, b;
    char c;
 
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &c);

    printf("Resultado: %.2f", retornarResultado(a, b, c));
}

float retornarResultado(int a, int b, char c) {
    if (c == '+') return a + b;
    if (c == '-') return a - b;
    if (c == '*') return a * b;
    if (c == '/') return a / b;
    else printf("Operacao invalida!");
}