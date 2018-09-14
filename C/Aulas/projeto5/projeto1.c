/* Programa que realiza a tabuada pro cidadão que ainda não aprendeu a tabuada
Desenvolvido por Steffano Pereira */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int x;

  printf("Diga o número que você deseja fazer a tabuada\n", );
  scanf("%d",&x);
  tabuada(x);

  return 0;
}

int tabuada(int x) {
  int y;
  int r;
  r = x;
  for (y = 0; y <= 10; y++) {
    printf("%d * %d",x,y);
    r = x*y;
    printf(" = %d\n",r);
  }
}
