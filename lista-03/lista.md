Lista de Exercícios 3:

5. Implemente a função max*vet, que recebe como parâmetro um vetor de números de ponto
   flutuante (vet) de tamanho n e retorna o maior número armazenado nesse vetor. Essa função deve
   obedecer o protótipo: float max_vet (int n, float * vet);
   Faça também a função main. 6. Implemente a função maiores, que recebe como parâmetro um vetor de números inteiros (vet) de
   tamanho n e um valor x. A função deve retornar quantos números maiores do que x existem nesse
   vetor. Essa função deve obedecer ao protótipo:
   int maiores(int n, int _ vet, int x); 7. Seja a seguinte sequência de instruções em um programa C:
   int *pti;
   int veti[]={10,7,2,6,3};
   pti = veti;
   Qual afirmativa é falsa?
   a. *pti é igual a 10
   b. _(pti+2) é igual a 2
   c. pti[4] é igual a 3
   d. pti[1] é igual a 10
   e. \_(veti+3) é igual a 6

6. Qual é o resultado do seguinte programa?
   #include <conio.h>
   #include <stdio.h>
   void main(){
   float vet[5] = {1.1,2.2,3.3,4.4,5.5};
   float _f;
   int i;
   f = vet;
   printf("contador/valor/valor/endereco/endereco");
   for(i = 0 ; i <= 4 ; i++){
   printf("\ni = %d",i);
   printf(" vet[%d] = %.1f",i, vet[i]);
   printf(" _(f + %d) = %.1f",i, \*(f+i));
   printf(" &vet[%d] = %X",i, &vet[i]);
   printf(" (f + %d) = %X",i, f+i);
   }
   }
7. Assumindo que pulo[] é um vetor do tipo int, quais das seguintes expressões referenciam o valor
   do terceiro elemento da matriz?
   a) _(pulo + 2) b) _(pulo + 4) c) pulo + 4 d) pulo + 2
8. Implemente um programa que chame a função média com o seguinte protótipo:
   float media(int n, float \*v)
9. Escreva um programa que realize a leitura da idade, da altura e do sexo de n pessoas. Ao final,
   mostre o número de mulheres com idade entre 20 e 35 anos e o número de homens com altura
   maior que 1,80m. Calcule e mostre também a variância da altura.
10. Fazer um programa para receber uma frase do usuário, caracter a caracter usando getch() e
    armazenando no vetor (máx. 80 caracteres). Quando o usuário digita enter (‘\r’) a recepção é
    finalizada. Mostrar cada palavra da frase em uma linha separada
11. Fazer um programa para:
    a. declarar variáveis a, b, c, d do tipo int.
    b. declarar variáveis e, f, g, h do tipo float.
    c. declarar vetor v de 10 elementos do tipo char.
    d. declarar variável x do tipo int.
    e. criar um ponteiro apontando para o endereço de a.
    f. incrementar o ponteiro, mostrando o conteúdo do endereço apontado (em forma de número).
    Caso o endereço coincida com o endereço de alguma outra variável, informar o fato.
12. Um cinema que possui capacidade de 100 lugares está quase sempre lotado. Certo dia cada
    espectador respondeu a um questionário, onde constava:

- sua idade;
- sua opinião em relação ao filme, que podia ser: ótimo, bom, regular, ruim ou péssimo.
  Elabore um programa que, recebendo estes dados calcule em funções e mostre:
  a. a quantidade de respostas ótimo;
  b. a diferença percentual entre respostas bom e regular;
  c. a média de idade das pessoas que responderam ruim;
  d. a porcentagem de respostas péssimo e a maior idade que utilizou esta opção;
  e. a diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu
  ruim.
