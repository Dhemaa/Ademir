#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num); // Lê o número digitado pelo usuário

    int antecessor = num - 1; // Calcula o antecessor do número
    int sucessor = num + 1; // Calcula o sucessor do número

    printf("O antecessor de %d eh %d\n", num, antecessor);
    printf("O sucessor de %d eh %d\n", num, sucessor);

    return 0;
}
