#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num); // L� o n�mero digitado pelo usu�rio

    if (num % 2 == 0) { // Testa se o n�mero � divis�vel por 2 (ou seja, se � par)
        printf("%d eh par\n", num);
    }
    else { // Se o n�mero n�o � divis�vel por 2, ent�o � �mpar
        printf("%d eh impar\n", num);
    }

    return 0;
}
