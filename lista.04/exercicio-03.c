// 3. O que será impresso na tela pelo seguinte programa:

#include <stdio.h>

int main(){
    int numbers[5];
    int *p;
    int n;

    p = numbers; // passa a apontar pro primeiro elemento do vetor
    *p = 10; // agora o primeiro elemento do vetor recebe o valor 10
    p++; // incrementa o ponteiro p para apontar para o próximo elemento do vetor
    *p = 20; // agora o segundo elemento do vetor recebe o valor 20
    p = &numbers[2]; // passa a apontar para o terceiro elemento do vetor
    *p = 30; // agora o terceiro elemento do vetor recebe o valor 30
    p = numbers + 3; // p passa a apontar para o quarto elemento do vetor
    // aqui, p ainda aponta para numbers[0]? qual a diferença dos exemplos anteriores? 
    // resposta: nao, p nao aponta para numbers[0], numbers + 3 faz p apontar para o quarto elemento 
    //do vetor, ou seja, numbers[3].
    // numbers + 3 não alter a o vetor nem incrementa o ponteiro gradualmente. Ele calcula diretamente 
    // o endereço correspondente à quarta posição. É equivalente a: p = &numbers[3];
    *p = 40; // agora o quarto elemento do vetor recebe o valor 40
    p = numbers; // passa a apontar para o primeiro elemento do vetor
    *(p + 4) = 50; // agora o quinto elemento do vetor recebe o valor 50
 
    for (n = 0; n < 5; n++){
        printf("%d", numbers[n]); // resposta: 10 20 30 40 50
    }

    return 0;
}