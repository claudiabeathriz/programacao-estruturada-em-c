// 4. Fazer uma função denominada divs() que:
//   a. recebe como parâmetro um número inteiro n por valor e dois números inteiros max e min por
//   referência;
//   b. retorna 0 se o número num é primo e 1 caso contrário. Se o número não for primo, as variáveis
//   max e min devem assumir os valores do menor e do maior divisores inteiros do número,
//   respectivamente, desconsiderando o número 1 e o próprio número num.

int divs(int num, int *max, int *min) {

    *min = 0; 
    *max = 0;

    for (int i = 2; i <= num / 2; i++) {

        if (num % i == 0) {
            if (*max == 0) *min = i;

            *max = i;
        }
    }

    if (*max == 0) {
        return 0; // número é primo
    } else {
        return 1; // número não é primo
    }
}