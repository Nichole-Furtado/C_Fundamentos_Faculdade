#include <stdio.h>

int main() {
    int tamanho;
    int soma = 0;
    float media;
    int i = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    do {
        printf("Digite o %i elemento: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i]; 
        i++; 
    } while (i < tamanho);

    media = soma / tamanho;

    printf("A média aritmética dos elementos do vetor é: %.0f\n", media);

    return 0;
}