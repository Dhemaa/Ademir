#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade); // L� a idade digitada pelo usu�rio

    if (idade >= 18) {
        printf("Maior de idade\n"); // Imprime se a idade � maior ou igual a 18
    } else {
        printf("Menor de idade\n"); // Imprime se a idade � menor que 18
    }

    return 0;
}
