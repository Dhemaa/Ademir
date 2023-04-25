#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero); // Lê o número digitado pelo usuário

    printf("Tabuada do %d:\n", numero);

    for (int i = 1; i <= 10; i++) { // Laço para calcular a tabuada
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
