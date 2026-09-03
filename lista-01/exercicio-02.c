#include <stdio.h>
#include <stdlib.h>

// 2. Fazer um programa que recebe 3 valores inteiros do usuário e mostra o maior deles, o
// menor deles, os valores pares e a média.

int main()
{
    int a, b, c;

    printf("Informe tres valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("DEBUG: a=%d, b=%d, c=%d\n", a, b, c);
    
    // maior
    int maior = a;

    if(b > maior) maior = b;
    if(c > maior) maior = c;

    // menor
    int menor = a;

    if(b < menor) menor = b;
    if(c < menor) menor = c;

    // media
    float media = (a + b + c)/3.0;

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Media: %.2f\n", media);

    // pares
    printf("Valores pares: ");

    if(a % 2 == 0){
        printf("%d ", a);
    }

    if(b % 2 == 0){
        printf("%d ", b);
    }

    if(c % 2 == 0){
        printf("%d ", c);
    }
    return 0;
}
