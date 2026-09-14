// O que será impresso na tela em (1), (2) e (3)? 
// Atenção aos formatos das letras em maiúsculo e minúsculo.

// O que você precisa entender:
// O nome de um vetor (frase) funciona como um ponteiro constante para o seu primeiro elemento.
// Em C, strings são vetores de caracteres terminados pelo caractere nulo (\0). 
// Se você injetar um \0 no meio da string, as funções de impressão (%s) param de ler ali.
// Aritmética de ponteiros (p + 3) desloca o endereço de memória base somando 
// o tamanho do tipo de dado (1 byte para char).

#include <stdio.h>

int main(void) {
    char frase[80] = "Quem ensina aprende ao ensinar";
    char *p;
    
    p = frase; // O ponteiro 'p' aponta para o início da string (foco na letra 'Q')
    
    // (1) p[2] acessa o terceiro caractere da string ("Quem..."), que é 'e'
    printf("(1) %c\n", p[2]); // output: "e"
    
    p[2] = 'X';   // Altera o 'e' para 'X' (frase vira "QuXm...")
    p[11] = '\0'; // Insere um caractere nulo (fim de string) na posição 11
    
    // (2) Imprime a string modificada até o '\0' que colocamos na posição 11
    printf("(2) %s\n", frase); // output: "QuXm ensina"
    
    p = p + 3; // novo endereço de p aponta para o caractere 'm' na string original, 
               // mas como a string foi truncada em p[11] = '\0', a impressão será a partir de 'm' até o '\0'
    
    // (3) Imprime a string a partir do novo endereço de p
    printf("(3) %s\n", p); // output: "m ensina"
    
    return 0;
}