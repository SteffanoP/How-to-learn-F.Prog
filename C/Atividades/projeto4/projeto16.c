/* xadrez2.c
Uma tela de xadrez do tamanho da 'tela'*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int lin, col;
  system("cls");
  system("mode con:cols=110 lines=30");
  for(lin=1;lin<=30;lin++) {
    for(col=1;col<=110;col++) {
      if ((lin+col)%2==0) {
        printf("\xdb\xdb");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  system("PAUSE");
  return 0;
}
