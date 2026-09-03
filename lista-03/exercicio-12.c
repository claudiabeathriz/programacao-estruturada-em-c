// 12. Fazer um programa para receber uma frase do usuário, caracter a caracter usando getch() e
// armazenando no vetor (máx. 80 caracteres). Quando o usuário digita enter (‘\r’) a recepção é
// finalizada. Mostrar cada palavra da frase em uma linha separada.

#include <stdio.h>

void imprimir_frase(char frase[]);

int main() {
    char frase[81];
    int i = 0;
    char c;

    printf("Digite uma frase (máx. 80 caracteres): ");

    for(int i = 0; i < 80; i++) {
        c = getch();
        if (c == '\r' || c == '\n') break;
        frase[i] = c;
    }
    frase[i] = '\0';

    imprimir_frase(frase);

    return 0;
}

void imprimir_frase(char frase[]){

    printf("Palavras da frase:\n");

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ') printf("\n");
        else printf("%c", frase[i]);
    }

    printf("\n");
}