#include <stdio.h>

int main() {
    float num1, num2, num3, media;

    printf("Digite tres numeros separados por espaco: ");
    scanf("%f %f %f", &num1, &num2, &num3); // L� os tr�s n�meros digitados pelo usu�rio

    media = (num1 + num2 + num3) / 3; // Calcula a m�dia aritm�tica

    printf("A media aritmetica dos numeros %.2f, %.2f e %.2f eh %.2f\n", num1, num2, num3, media); // Imprime a m�dia aritm�tica com duas casas decimais

    return 0;
}
