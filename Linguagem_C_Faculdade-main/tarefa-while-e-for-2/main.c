/*2-Escreva um programa que calcule a soma dos números pares de 1 a 100 e imprima o resultado. */
/* #include <stdio.h>

int main(void) {
   int x = 1;
  while (x <= 100){
    if(x % 2 == 0) // == é igual, != é diferente
      printf("%d\n", x);
      x++;

  }

  return 0;
} */

#include <stdio.h>

int main(void) {
   int x = 1, soma = 0;
  for (int i = 1;x <= 100; x++){
   if ( x % 2 == 0){
     soma += soma + x;
    // == é igual, != é diferente, isso esta na conta porque o x é igual a 1, e o i é igual a 1, e o i é menor ou igual e o 2 representa o x, e o x é menor ou igual a 100, e o x é incrementado.
      printf("%d\n", x);
      x++;
      }
  }

  return 0;
}