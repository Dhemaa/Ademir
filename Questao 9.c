#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero); // L� o n�mero digitado pelo usu�rio

    printf("Tabuada do %d:\n", numero);

    for (int i = 1; i <= 10; i++) { // La�o para calcular a tabuada
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
