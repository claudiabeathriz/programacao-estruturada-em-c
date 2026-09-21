// 2. Escreva um programa em C para ler um vetor R (de 5 elementos) e um vetor S (de 10
// elementos). Gere um vetor X que possua os elementos comuns a R e a S. Considere que pode
// existir repetição de elementos no mesmo vetor. Nesta situação somente uma ocorrência do
// elemento comum aos dois deve ser copiada para o vetor X. Após o término da cópia, escrever o
// vetor X.

#include <stdio.h>

int main(){
    int R[5], S[10], X[5];
    int i, j, k;

    printf("Informe os elementos do vetor R (5 elementos):\n");
    for(i = 0; i < 5; i++){
        scanf("%d", &R[i]);
    }

    printf("Informe os elementos do vetor S (10 elementos):\n");
    for(i = 0; i < 10; i++){
        scanf("%d", &S[i]);
    }

    k = 0; // índice para o vetor X
    for(i = 0; i < 5; i++){
        for(j = 0; j < 10; j++){
            if(R[i] == S[j]){
                int alreadyExists = 0;
                for(int m = 0; m < k; m++){
                    if(X[m] == R[i]){
                        alreadyExists = 1;
                        break;
                    }
                }
                if(!alreadyExists){
                    X[k] = R[i];
                    k++;
                }
                break;
            }
        }
    }
    printf("Vetor X (elementos comuns a R e S):\n");
    for(i = 0; i < k; i++){
        printf("%d ", X[i]);
    }
    return 0;
}