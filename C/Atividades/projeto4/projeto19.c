/*ACERTE O RANDOM
A soma do intervalo entre dois números divisiveis por a
Desenvolvido por Steffano Pereira*/

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a,b,c;
  int i,n=0;

  do {
    printf("Diga o valor de a maior que 1\n");
    scanf("%d",&a);
  } while (a < 1);
  printf("Diga o valor de b\n");
  scanf("%d",&b);
  printf("Diga o valor de c\n");
  scanf("%d",&c);

  for(i = b;i <= c;i++) {
    if((i%a)==0) {
      n = i + n;
    }
  }

  printf("A soma sera %d",n);
  return 0;
}
