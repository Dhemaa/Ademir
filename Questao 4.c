#include <stdio.h>

int main() {
    float num1, num2, num3, media;

    printf("Digite tres numeros separados por espaco: ");
    scanf("%f %f %f", &num1, &num2, &num3); // Lê os três números digitados pelo usuário

    media = (num1 + num2 + num3) / 3; // Calcula a média aritmética

    printf("A media aritmetica dos numeros %.2f, %.2f e %.2f eh %.2f\n", num1, num2, num3, media); // Imprime a média aritmética com duas casas decimais

    return 0;
}
