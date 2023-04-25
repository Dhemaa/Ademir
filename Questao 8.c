#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius); // Lê a temperatura em graus Celsius digitada pelo usuário

    fahrenheit = (celsius * 9 / 5) + 32; // Converte a temperatura para Fahrenheit

    printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit\n", celsius, fahrenheit); // Imprime a temperatura em graus Fahrenheit

    return 0;
}
