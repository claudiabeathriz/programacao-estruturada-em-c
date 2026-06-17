// 5. Defina as variáveis a, b e c (tipo de dado) 
// para obter todas as possíveis respostas
// para os valores de ‘c’:

// Suponha que:
// a = 3
// b = a / 2
// c = b + 3.1

// Valores possíveis para ‘c’?
// 1. c = 4.6
// 2. c = 4.1
// 3. c = 4

#include <stdio.h>

int main() {

    // para c = 4.6
    // float a, b, c;

    // para c = 4.1
    int a, b;
    float c;

    // para c = 4
    // int a, b, c;

    a = 3;
    b = a/2;
    c = b + 3.1;

    printf("%.1f, %.1f, %.1f ", a, b, c);
}