Lista de Exercícios 3:

Ponteiros:

1. Implemente a função calcula_circulo, que calcula a área e a circunferência de um círculo de raio
   r. Essa função deve obedecer o protótipo:
   void calc_circulo(float r, float _ circunferencia, float _ area);
   Fórmulas:
   A = π r
   2 ; c = 2 π r ; π = 3.14159265
   Note que essa passagem dos 2 últimos parâmetros é uma passagem por referência.
2. Seja o seguinte trecho de programa:
   int i=3,j=5;
   int *p, *q;
   p = &i;
   q = &j;
   Qual é o valor das seguintes expressões ?
   a) p == &i; b) *p - *q c) \*_&p d) 3_ - *p/(*q)+7
3. Qual é a saída deste programa supondo que i ocupa o endereço 4094 na memória?
   main() {
   int i=5, *p;
   p = &i;
   printf("%x %d %d \n", p, *p+2, 3\*\*p);
   }
4. Fazer uma função denominada divs() que:
   a. recebe como parâmetro um número inteiro n por valor e dois números inteiros max e min por
   referência;
   b. retorna 0 se o número num é primo e 1 caso contrário. Se o número não for primo, as variáveis
   max e min devem assumir os valores do menor e do maior divisores inteiros do número,
   respectivamente, desconsiderando o número 1 e o próprio número num.

Ponteiros e Vetores: 5. Implemente a função max_vet, que recebe como parâmetro um vetor de números de ponto
flutuante (vet) de tamanho n e retorna o maior número armazenado nesse vetor. Essa função deve
obedecer o protótipo: float max_vet (int n, float _ vet);
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
e. _(veti+3) é igual a 6

8. Qual é o resultado do seguinte programa?
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
9. Assumindo que pulo[] é um vetor do tipo int, quais das seguintes expressões referenciam o valor
   do terceiro elemento da matriz?
   a) _(pulo + 2) b) _(pulo + 4) c) pulo + 4 d) pulo + 2
10. Implemente um programa que chame a função média com o seguinte protótipo:
    float media(int n, float \*v)
11. Escreva um programa que realize a leitura da idade, da altura e do sexo de n pessoas. Ao final,
    mostre o número de mulheres com idade entre 20 e 35 anos e o número de homens com altura
    maior que 1,80m. Calcule e mostre também a variância da altura.
12. Fazer um programa para receber uma frase do usuário, caracter a caracter usando getch() e
    armazenando no vetor (máx. 80 caracteres). Quando o usuário digita enter (‘\r’) a recepção é
    finalizada. Mostrar cada palavra da frase em uma linha separada
13. Fazer um programa para:
    a. declarar variáveis a, b, c, d do tipo int.
    b. declarar variáveis e, f, g, h do tipo float.
    c. declarar vetor v de 10 elementos do tipo char.
    d. declarar variável x do tipo int.
    e. criar um ponteiro apontando para o endereço de a.
    f. incrementar o ponteiro, mostrando o conteúdo do endereço apontado (em forma de número).
    Caso o endereço coincida com o endereço de alguma outra variável, informar o fato.
14. Um cinema que possui capacidade de 100 lugares está quase sempre lotado. Certo dia cada
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
