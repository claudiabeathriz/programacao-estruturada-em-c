// 6. Implemente a função maiores, que recebe como parâmetro um vetor de números inteiros (vet) de
//   tamanho n e um valor x. A função deve retornar quantos números maiores do que x existem nesse
//   vetor. Essa função deve obedecer ao protótipo:
//   int maiores(int n, int * vet, int x);

int maiores(int n, int *vet, int x) {
    int cont = 0;

    for (int i = 0; i < n; i++) {
        if (vet[i] > x) cont++;
    }

    return cont;
}

int main(){

    int n, x;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vet[n];
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    int total = maiores(n, vet, x);
    printf("Existem %d numeros maiores que %d no vetor.\n", total, x);

    return 0;
}
