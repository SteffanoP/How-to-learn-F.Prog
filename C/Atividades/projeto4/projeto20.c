/*ACERTE O RANDOM
Descubra o número aleatório
Desenvolvido por Steffano Pereira*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int x,n;

  x = rand() % 101;

  do {
    printf("Tente acertar o numero ai cidadao\n");
    scanf("%d",&n);
    if (n > x) {
      printf("Numero alto demais cidadao, tente novamente\n");
    } else if (n < x) {
      printf("Numero pequeno demais cidadao, tente novamente\n");
    }
  } while (x != n);
  printf("PARABENS CIDADAO VOCE FEZ UM BEM A PATRIA ACERTANDO O NUMERO ALEATORIO\n");
  return 0;
}
