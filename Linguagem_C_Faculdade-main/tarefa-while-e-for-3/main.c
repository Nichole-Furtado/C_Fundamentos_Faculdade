/*3-Escreva um programa que solicite ao usuário um número e calcule o fatorial desse
  número. O fatorial de um número é o produto de todos os números inteiros positivos
  menores ou iguais a esse número.*/

/*#include <stdio.h>

int main(void) {
  float num, fatorial = 1;
  float i=1;
  printf("Digite um número: ");
  scanf("%f", &num);
  for (int i = 1; i <= num; i++)
    fatorial *= i;
  printf("O fatorial de %.0f é %.0f", num, fatorial);
  return 0;
} */

#include <stdio.h>

int main(void) {
  float num, fatorial = 1;
  float i=1;
  printf("Digite um número: ");
  scanf("%f", &num);
  while (i <= num){
    fatorial *= i;
    i++;
  }
    
  printf("O fatorial de %.0f é %.0f", num, fatorial);
  return 0;
} 