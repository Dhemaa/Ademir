#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade); // Lê a idade digitada pelo usuário

    if (idade >= 18) {
        printf("Maior de idade\n"); // Imprime se a idade é maior ou igual a 18
    } else {
        printf("Menor de idade\n"); // Imprime se a idade é menor que 18
    }

    return 0;
}
