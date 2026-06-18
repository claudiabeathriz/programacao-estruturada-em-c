// 6. Implemente uma função que calcule as raízes de uma equação do segundo grau, do tipo ax2 + bx + c = 0.
// Observação: para o cálculo da raiz quadrada de um número, utilize a função sqrt.
// Consulte a documentação de como usá-la no programa.

#include <stdio.h>
#include <math.h>

void calcularRaizes(float a, float b, float c);

int main() {
    float a, b, c;

    printf("Informe os coeficientes da equacao de 2 grau para calculo das raizes: ");
    scanf("%f %f %f", &a, &b, &c);

    calcularRaizes(a, b, c);
 
    return 0;
}

void calcularRaizes(float a, float b, float c) {
    float r1, r2;
    float delta = b * b - 4 * a * c;

    if (delta < 0) printf("Nao existem raizes reais");
    else if (delta == 0) {
        r1 = (-b + sqrt(delta)) / (2 * a);
        printf("A equacao possui duas raizes iguais: %.2f", r1);
    }
    else if (delta > 0) {
        r1 = (-b - sqrt(delta)) / (2 * a);
        r2 = (-b + sqrt(delta)) / (2 * a);
        printf("As raizes da equacao sao: %.2f, %.2f", r1, r2);
    }
}