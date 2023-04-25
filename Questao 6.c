#include <stdio.h>
#include <math.h>

int main() {
    float num;

    printf("Digite um numero real: ");
    scanf("%f", &num); // Lê o número digitado pelo usuário

    int parteInteira = (int) floor(num); // Calcula a parte inteira do número usando a função floor()

    printf("A parte inteira de %.2f eh %d\n", num, parteInteira); // Imprime a parte inteira do número

    return 0;
}
