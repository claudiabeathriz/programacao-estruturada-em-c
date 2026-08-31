// 11. Escreva um programa que realize a leitura da idade, da altura e do sexo de n pessoas. Ao final,
// mostre o número de mulheres com idade entre 20 e 35 anos e o número de homens com altura
//  maior que 1,80m. Calcule e mostre também a variância da altura.

#include <stdio.h>

struct Pessoa {
    int idade;
    float altura;
    char sexo;
};

void calcular_variancia(int n, float alturas[], float *variancia);
int contar_mulheres_20_35(struct Pessoa pessoas[], int n);
int contar_homens_altos(struct Pessoa pessoas[], int n);

int main(){
    int n;
    printf("Informe o numero de pessoas: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Numero de pessoas invalido.\n");
        return 1;
    }

    struct Pessoa pessoas[n];

    for (int i = 0; i < n; i++) {
        printf("Informe a idade da pessoa %d: ", i + 1);
        scanf("%d", &pessoas[i].idade);
        printf("Informe a altura da pessoa %d (em metros): ", i + 1);
        scanf("%f", &pessoas[i].altura);
        printf("Informe o sexo da pessoa %d (M/F): ", i + 1);
        scanf(" %c", &pessoas[i].sexo);
    }

    float alturas[n];
    float variancia;

    for (int i = 0; i < n; i++) {
        alturas[i] = pessoas[i].altura;
    }

    calcular_variancia(n, alturas, &variancia);

    printf("Numero de mulheres com idade entre 20 e 35 anos: %d\n", 
        contar_mulheres_20_35(pessoas, n));
    printf("Numero de homens com altura maior que 1,80m: %d\n", 
        contar_homens_altos(pessoas, n));
    printf("Variancia da altura: %.4f\n", 
        variancia);

    return 0;

}

int contar_mulheres_20_35(struct Pessoa pessoas[], int n) {
    int contador = 0;
    for (int i = 0; i < n; i++) {
        if (pessoas[i].sexo == 'F' && 
            pessoas[i].idade >= 20 && 
            pessoas[i].idade <= 35) {
            contador++;
        }
    }
    return contador;
}

int contar_homens_altos(struct Pessoa pessoas[], int n) {
    int contador = 0;
    for (int i = 0; i < n; i++) {
        if (pessoas[i].sexo == 'M' && 
            pessoas[i].altura > 1.80) {
            contador++;
        }
    }
    return contador;
}

void calcular_variancia(int n, float alturas[], float *variancia) {
    float soma = 0;

    for (int i = 0; i < n; i++) {
        soma += alturas[i];
    }

    float media = soma / n;

    float soma_quadrados = 0;

    for (int i = 0; i < n; i++) {
        soma_quadrados += (alturas[i] - media) * (alturas[i] - media);
    }
    
    *variancia = soma_quadrados / n;
}