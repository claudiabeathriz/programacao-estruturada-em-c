// 8. O número 3025 possui a seguinte característica: 30 + 25 = 55 -> 55*55 = 3025. Fazer
//   um programa para obter todos os números de 4 algarismos com a mesma característica do
//   número 3025.

#include <stdio.h>

int main() {
    int num, a, b, square;
    
    printf("Números de 4 algarismos com a característica de 3025:\n");
    
    for (num = 1000; num <= 9999; num++) {
        a = num / 100;
        b = num % 100;
        square = (a + b) * (a + b);
        
        if (square == num) {
            printf("%d\n", num);
        }
    }
    
    return 0;
}