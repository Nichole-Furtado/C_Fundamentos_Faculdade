/*4-Escreva um programa que gere um número aleatório entre 1 e 100 e dê ao
  usuário 7 chances para adivinhar o número. O programa deve informar se o
  palpite do usuário está acima, abaixo ou correto em relação ao número gerado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
int n1, adivinhar;
int numero_aleatorio;
srand(time(NULL));
numero_aleatorio = rand() % 100 + 1;
for (n1 = 0; n1 <= 7; n1++) {
printf("\n Adivinhe o numero aleatorio: ");
scanf("%d", &adivinhar);
if (adivinhar == numero_aleatorio) {
printf("\n Parabens voce acertou");
return 0;
} else if (adivinhar > numero_aleatorio) {
printf("\n Voce esta acima do numero");
} else if (adivinhar < numero_aleatorio) {
printf("\n Voce esta abaixo do numero");
}
}

return 0;
}