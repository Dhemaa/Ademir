#include <stdio.h>

int main() {
  int num1, num2, soma;
  
  //declarei 3 variaveis para armazenar os dois números que o usuário irá digitar, e 'soma' é usada para armazenar o resultado da soma.

  printf("Digite o primeiro número: ");
  scanf("%d", &num1);

  printf("Digite o segundo número: ");
  scanf("%d", &num2);

//printf para imprimir na tela e scanf para armazenar o numero na variavel

  soma = num1 + num2;

  printf("A soma de %d e %d é igual a %d\n", num1, num2, soma);

  return 0;
}

