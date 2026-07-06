// 9. Implementar a função INVERTE que recebe um número unsigned int como parâmetro
//   e retorna este número escrito ao contrário. Ex: 431 <-> 134.

#include <stdio.h>

unsigned int inverte(unsigned int num);

int main() {
    unsigned int num;

    printf("Digite um número inteiro positivo: ");
    scanf("%u", &num);

    unsigned int resultado = inverte(num);
    printf("Número invertido: %u\n", resultado);

    return 0;
}

unsigned int inverte(unsigned int num){
    unsigned int invertido = 0;

    while(num > 0){
        invertido = invertido * 10 + (num % 10);
        num /= 10;
    }

    return invertido;
}