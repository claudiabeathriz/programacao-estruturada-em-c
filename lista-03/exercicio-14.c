// 14. Um cinema que possui capacidade de 100 lugares está quase sempre lotado. Certo dia cada
// espectador respondeu a um questionário, onde constava:
// - sua idade;
// - sua opinião em relação ao filme, que podia ser: ótimo, bom, regular, ruim ou péssimo.
// Elabore um programa que, recebendo estes dados calcule em funções e mostre:
// a. a quantidade de respostas ótimo;
// b. a diferença percentual entre respostas bom e regular;
// c. a média de idade das pessoas que responderam ruim;
// d. a porcentagem de respostas péssimo e a maior idade que utilizou esta opção;
// e. a diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {
    int idade;
    char opiniao[20];
} Espectador;

int qtd_otimo(Espectador espectador[], int n);
float dif_percentual_bom_regular(Espectador espectador[], int n);
float media_idade_ruim(Espectador espectador[], int n);
float porcentagem_pessimo_maior_idade(Espectador espectador[], int n);
int dif_maior_idade_otimo_ruim(Espectador espectador[], int n);

int main(){

    Espectador espectador[100];

    for(int i = 0; i < 100; i ++){
        printf("Informe a idade do espectador %d: ", i + 1);
        scanf("%d", &espectador[i].idade);
        printf("Informe a opiniao do espectador %d (otimo, bom, regular, ruim, pessimo): ", i + 1);
        scanf("%s", espectador[i].opiniao);
    }

    printf("Quantidade de respostas 'otimo': %d\n", qtd_otimo(espectador, 100));
    printf("Diferença percentual entre respostas bom e regular: %.2f%%\n", dif_percentual_bom_regular(espectador, 100));
    printf("Média de idade das pessoas que responderam ruim: %.2f\n", media_idade_ruim(espectador, 100));
    printf("Porcentagem de respostas 'pessimo': %.2f%%\n", porcentagem_pessimo_maior_idade(espectador, 100));
    printf("Diferença de idade entre a maior idade que respondeu 'otimo' e a maior idade que respondeu 'ruim': %d\n", dif_maior_idade_otimo_ruim(espectador, 100));
    
    return 0;
}

int qtd_otimo(Espectador espectador[], int n){
    int contador = 0;
    for(int i = 0; i < n; i++){
        if(strcmp(espectador[i].opiniao, "otimo") == 0){
            contador++;
        }
    }
    return contador;
}

float dif_percentual_bom_regular(Espectador espectador[], int n){
    int bom = 0;
    int regular = 0;
    for(int i = 0; i < n; i++){
        if(strcmp(espectador[i].opiniao, "bom") == 0){
            bom++;
        } else if(strcmp(espectador[i].opiniao, "regular") == 0){
            regular++;
        }
    }

    float percentual_bom = (float) bom / n * 100;
    float percentual_regular = (float) regular / n * 100;
    return fabsf(percentual_bom - percentual_regular);
}

float media_idade_ruim(Espectador espectador[], int n){
    int soma_idade = 0;
    int contador = 0;
    for(int i = 0; i < n; i++){
        if(strcmp(espectador[i].opiniao, "ruim") == 0){
            soma_idade += espectador[i].idade;
            contador++;
        }
    }

    if(contador == 0){
        return 0;
    }

    return (float) soma_idade / contador;
}

float porcentagem_pessimo_maior_idade(Espectador espectador[], int n){
    int pessimo = 0;
    int maior_idade = 0;
    for(int i = 0; i < n; i++){
        if(strcmp(espectador[i].opiniao, "pessimo") == 0){
            pessimo++;
            if(espectador[i].idade > maior_idade){
                maior_idade = espectador[i].idade;
            }
        }
    }

    if(pessimo == 0){
        printf("Nenhum espectador respondeu 'pessimo'.\n");
        return 0;
    }

    printf("Maior idade que respondeu 'pessimo': %d\n", maior_idade);
    return (float) pessimo / n * 100;
}

int dif_maior_idade_otimo_ruim(Espectador espectador[], int n){
    int maior_otimo = 0;
    int maior_ruim = 0;

    for(int i = 0; i < n; i++){
        if(strcmp(espectador[i].opiniao, "otimo") == 0){
            if(espectador[i].idade > maior_otimo){
                maior_otimo = espectador[i].idade;
            }
        } else if(strcmp(espectador[i].opiniao, "ruim") == 0){
            if(espectador[i].idade > maior_ruim){
                maior_ruim = espectador[i].idade;
            }
        }
    }

    if (maior_otimo == 0 || maior_ruim == 0) {
        printf("Não há respostas 'otimo' ou 'ruim' para calcular a diferença de idade.\n");
        return 0;
    }
    
    return abs(maior_otimo - maior_ruim);
}