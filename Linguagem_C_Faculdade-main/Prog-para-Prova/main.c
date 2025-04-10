#include <stdio.h>

int main(void) {
  float prova, trabalho, media;
  printf("Digite a nota da prova:(0 a 10)\n  ");
  scanf("%f", &prova);
  printf("Digite a nota do trabalho: (0 a 10)\n ");
  scanf("%f", &trabalho);
 media = prova * 0.6 + trabalho * 0.4;
  printf("A media do aluno é: %0.f", media);
  return 0;
}