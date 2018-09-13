/*O menor número inteiro que
n/2 com resto 2
n/5 com resto 3
n/7 com resto 4
Desenvolvido por Steffano Pereira*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;

  for(n = 0; ;n++) {
    if (((n%3)==2)&&((n%5)==3)&&((n%7)==4)) {
      break;
    }
  }
  printf("%d\n",n);
  return 0;
}
