#include <stdio.h>

int main(void) {
  int matriz [4][4];
   int SomaDiagonal = 0;
      int Contapares = 0;

      printf("Digite os elementos da matriz 4x4:\n");
      for (int i = 0; i < 4; i++) {
          for (int j = 0; j < 4; j++) {
              printf("Digite o elemento [%i][%i]: ", i + 1, j + 1);
              scanf("%i", &matriz[i][j]);
          }
      }

      for (int i = 0; i < 4; i++) {
            SomaDiagonal += matriz[i][i];
          if (matriz[i][3 - i] % 2 == 0) {
  Contapares++;
          }
      }

      printf("\nSomatório dos elementos da diagonal principal: %d\n", SomaDiagonal);
      printf("Quantidade de valores pares na diagonal secundária: %d\n", Contapares);

      return 0;
  }