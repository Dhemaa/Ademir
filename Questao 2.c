#include <stdio.h>

#define PI 3.14159 // Definimos o valor de PI como constante usando a diretiva #define

int main() {
    float raio, area;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio); // L� o raio do c�rculo digitado pelo usu�rio

    area = PI * raio * raio; // Calcula a �rea do c�rculo

    printf("A area do circulo de raio %.2f eh %.2f.\n", raio, area); // Imprime a �rea com duas casas decimais

    return 0;
}
