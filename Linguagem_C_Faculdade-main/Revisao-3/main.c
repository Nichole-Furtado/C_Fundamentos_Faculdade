#include <stdio.h>
#include <stdbool.h>

void imprimirMenu();
void realizarOperacao(int opcao);
int soma(int a, int b);
int diferenca(int a, int b);
int produto(int a, int b);
float divisao(int a, int b);

int main() {
    int opcao;

    do {
        imprimirMenu();
        printf("Escolha a opção: ");
        scanf("%d", &opcao);

        if (opcao == 1 || opcao == 2 || opcao == 3 || opcao == 4) {
            realizarOperacao(opcao);
        } else if (opcao != 0) {
            printf("Opção inválida! Por favor, escolha uma opção válida.\n");
        }

    } while (opcao != 0);

    printf("Saindo do programa...\n");

    return 0;
}

void imprimirMenu() {
    printf("\nEscolha a opção:\n");
    printf("1- Soma de 2 números\n");
    printf("2- Diferença entre 2 números\n");
    printf("3- Produto entre 2 números\n");
    printf("4- Divisão entre 2 números\n");
    printf("0- Sair\n");
}

void realizarOperacao(int opcao) {
    int num1, num2;
    float resultado;

    printf("Digite dois números para a operação:\n");
    printf("Número 1: ");
    scanf("%d", &num1);
    printf("Número 2: ");
    scanf("%d", &num2);

    if (opcao == 1) {
        resultado = soma(num1, num2);
        printf("Resultado da soma: %d\n", (int)resultado);
    } else if (opcao == 2) {
        resultado = diferenca(num1, num2);
        printf("Resultado da diferença: %d\n", (int)resultado);
    } else if (opcao == 3) {
        resultado = produto(num1, num2);
        printf("Resultado do produto: %d\n", (int)resultado);
    } else if (opcao == 4) {
        if (num2 != 0) {
            resultado = divisao(num1, num2);
            printf("Resultado da divisão: %.2f\n", resultado);
        } else {
            printf("Erro: Divisão por zero!\n");
        }
    }
}

int soma(int a, int b) {
    return a + b;
}

int diferenca(int a, int b) {
    return a - b;
}

int produto(int a, int b) {
    return a * b;
}

float divisao(int a, int b) {
    return (float)a / b;
}