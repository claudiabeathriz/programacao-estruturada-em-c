// 4. Escreva um programa que sorteie uma letra do alfabeto de ‘a’ a ‘z’ e o usuário é
//   perguntado qual é essa letra. O programa deve informar se a letra é maior ou menor e
//   quando o usuário a acertou.

#include <stdio.h>
#include <stdlib.h>

int main() {
    char letraSorteada, letraUsuario;
    
    letraSorteada = 'a' + (rand() % 26);

    printf("Tente adivinhar a letra sorteada (de 'a' a 'z'):\n");

    do {
        scanf(" %c", &letraUsuario);

        if (letraUsuario == letraSorteada) {
            printf("Parabéns! Você acertou a letra sorteada: %c\n", letraSorteada);
        } else {
            if (letraUsuario > letraSorteada) {
                printf("A letra sorteada é menor. Tente novamente:\n");
            } else {
                printf("A letra sorteada é maior. Tente novamente:\n");
            }
        }
    } while (letraUsuario != letraSorteada);

    return 0;
}

