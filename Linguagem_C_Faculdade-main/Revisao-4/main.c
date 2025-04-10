#include <stdio.h>

int main() {
    int N;
    int contador = 0;
    int numero = 1;

    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &N);

    printf("Números ímpares de 1 até %d:\n", N);
    do {
        if (numero % 2 != 0) {
            printf("%d ", numero);
            contador++;
        }
        numero++;
    } while (numero <= N);

    printf("\nQuantidade de números ímpares: %d\n", contador);

    return 0;
}