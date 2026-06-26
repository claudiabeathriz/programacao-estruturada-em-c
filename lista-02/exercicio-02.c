// 2. Faça um programa que calcule e imprima a soma dos n 
// primeiros números naturais ímpares. 
// O usuário do programa deve fornecer quantos números devem ser somados.

#include <stdio.h>

int somarImpares(int n);

int main(){
    int n;
    printf("Digite quantos números naturais ímpares deseja somar: ");
    scanf("%d", &n);

    int soma = somarImpares(n);
    printf("A soma dos %d primeiros números naturais ímpares é: %d\n", n, soma);
}  

int somarImpares(int n){
    int soma = 0;
    for(int i = 0; i < n; i++){
        soma += (2 * i + 1);
    }
    return soma;
}