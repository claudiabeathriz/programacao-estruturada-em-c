// 4. Um funcionário da UFF precisa validar as notas de 3 provas fornecidas por um professor e
// indicar: a média, se está aprovado/reprovado e se tem direito de realizar a VS.
// Inicialmente, faça um programa que recebe como entrada as 3 notas e mostre os resultados solicitados.
// Posteriormente, coloque o código de cálculo da média em uma função.
// Em um passo seguinte, realize os controles necessários para não receber notas inválidas.

#include <stdio.h>

float calcularMedia(float a, float b, float c);

int main() {
    float a, b, c;

    printf("Informe as 3 notas:");
    scanf("%f%f%f", &a, &b, &c);

    if (a < 0 || b < 0 || c < 0 ||
        a > 10 || b > 10 || c > 10) {
        printf("Notas invalidas");
        return 1;
    }

    float media = calcularMedia(a, b, c);

    printf("Media: %.2f\n", media);

    if (media >= 6) printf("Aluno aprovado.");
    else if (media >= 4 && media < 6) printf("VS");
    else printf("Aluno reprovado.");

    return 0;
}

float calcularMedia(float a, float b, float c) {
    return (a + b + c) / 3;
}