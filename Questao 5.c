#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num); // L� o n�mero digitado pelo usu�rio

    int antecessor = num - 1; // Calcula o antecessor do n�mero
    int sucessor = num + 1; // Calcula o sucessor do n�mero

    printf("O antecessor de %d eh %d\n", num, antecessor);
    printf("O sucessor de %d eh %d\n", num, sucessor);

    return 0;
}
