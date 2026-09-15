// O que será impresso na tela em (1) e (2)?

// O que você precisa entender:
// Recursão é uma função que chama a si mesma. Ela sempre precisa de um caso base 
//(condição de parada, como n == 1) para não entrar em loop infinito.
// Acompanhe a pilha de chamadas (call stack): funcao(5) imprime 5 e chama funcao(4), 
// que imprime 4 e chama funcao(3), etc., até chegar em 1 e retornar o valor acumulado 
// somando 3 em cada retorno.

#include <stdio.h>

int funcao(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    // (1) Imprime os valores intermediários de n antes de descer na recursão
    printf("%d, ", n); 
    
    return funcao(n - 1) + 3;
}

int main() {
    // (2) Imprime o retorno final da função chamada com argumento 5
    printf("\nResultado=%d\n", funcao(5));
    return 0;
}

/* Pilha de chamadas
Cada chamada abre uma nova execução da função, que fica aguardando a anterior terminar.
1. funcao(5)
   - n == 0? Não.
   - n == 1? Não.
   - Executa printf: imprime 5,
   - Chama funcao(4).
     Aguardando retorno
2. funcao(4)
   - n == 0? Não.
   - n == 1? Não.
   - Executa printf: imprime 4,
   - Chama funcao(3).
     Aguardando retorno
3. funcao(3)
   - n == 0? Não.
   - n == 1? Não.
   - Executa printf: imprime 3,
   - Chama funcao(2).
     Aguardando retorno
4. funcao(2)
   - n == 0? Não.
   - n == 1? Não.
   - Executa printf: imprime 2,
   - Chama funcao(1).
     Aguardando retorno
5. funcao(1)
   - n == 0? Não.
   - n == 1? SIM!
   - Executa return 1.
   - Não chega ao printf.
     Retorna 1
Até aqui, a tela já recebeu: 5, 4, 3, 2,
*/

/*
Subindo: retornos da função
Agora começa a parte que costuma confundir.

Quando funcao(1) retorna 1, a chamada funcao(2) finalmente consegue terminar esta linha:
return funcao(n - 1) + 3;


Vamos substituir os valores literalmente:
Resolução dos retornos
1º retorno: funcao(1)
1
Retornou diretamente pelo caso base.

2º retorno: funcao(2)
return funcao(1) + 3

return 1 + 3
4


3º retorno: funcao(3)
return funcao(2) + 3

return 4 + 3
7


4º retorno: funcao(4)
return funcao(3) + 3

return 7 + 3
10


5º retorno: funcao(5)
return funcao(4) + 3

return 10 + 3
13
*/