#include <stdio.h>

int main() {
    char nome[50];
    int idade;

    printf("Digite seu nome: ");
    scanf("%s", nome); // Lê o nome digitado pelo usuário

    printf("Digite sua idade: ");
    scanf("%d", &idade); // Lê a idade digitada pelo usuário

    printf("Olá, %s! Você tem %d anos.\n", nome, idade);

    return 0;
}
