#include <stdio.h>
#include <math.h>

int main() {
    float num;

    printf("Digite um numero real: ");
    scanf("%f", &num); // L� o n�mero digitado pelo usu�rio

    int parteInteira = (int) floor(num); // Calcula a parte inteira do n�mero usando a fun��o floor()

    printf("A parte inteira de %.2f eh %d\n", num, parteInteira); // Imprime a parte inteira do n�mero

    return 0;
}
