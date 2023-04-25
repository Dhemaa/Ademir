#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num); // Lê o número digitado pelo usuário

    if (num % 2 == 0) { // Testa se o número é divisível por 2 (ou seja, se é par)
        printf("%d eh par\n", num);
    }
    else { // Se o número não é divisível por 2, então é ímpar
        printf("%d eh impar\n", num);
    }

    return 0;
}
