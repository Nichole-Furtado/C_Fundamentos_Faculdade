/*5-Escreva um programa que solicite ao usuário um número e, em seguida, imprima uma contagem regressiva a partir desse número até 1 porém mostrando cada número após 1
segundo.*/

#include <stdio.h>

int main(void) {
float num;
  printf( "Digite um número: ");
  scanf("%f", &num);

  while(num >= 1){
    printf("%.0f\n", num);
    num--;
    sleep(1);
    
  }
  
  return 0;
}