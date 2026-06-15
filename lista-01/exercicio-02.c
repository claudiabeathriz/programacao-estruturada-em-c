// 2. Fazer um programa que recebe 3 valores inteiros do usuário
// e mostra o maior deles, o menor deles, os valores pares e a média.

#include <stdio.h>

int maior(int a, int b, int c);
int menor(int a, int b, int c);
float media(int a, int b, int c);
void mostrarPares(int a, int b, int c);

int main() {
    int a, b, c;

    printf("Informe 3 valores inteiros: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("Maior: %d \n", maior(a, b, c));
    printf("Menor: %d \n", menor(a, b, c));
    printf("Media: %.2f \n", media(a, b, c));
    mostrarPares(a, b, c);

    return 0;
}

int maior(int a, int b, int c) {
    int m = a;

    if (b > m) m = b;
    if (c > m) m = c;

    return m;
}

int menor(int a, int b, int c) {
    int m = a;

    if (b < m) m = b;
    if (c < m) m = c;

    return m;
}

float media(int a, int b, int c) {
    float media = (a+b+c)/3.0;

    return media;
}

void mostrarPares(int a, int b, int c) {
    printf("Valores pares: ");

    if (a%2==0) printf("%d", a);
    if (b%2==0) printf("%d", b);
    if (c%2==0) printf("%d", c);
    printf("\n");
}