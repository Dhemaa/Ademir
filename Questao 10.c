#include <stdio.h>

int main() {
    char nome[50];
    int idade;

    printf("Digite seu nome: ");
    scanf("%s", nome); // L� o nome digitado pelo usu�rio

    printf("Digite sua idade: ");
    scanf("%d", &idade); // L� a idade digitada pelo usu�rio

    printf("Ol�, %s! Voc� tem %d anos.\n", nome, idade);

    return 0;
}
