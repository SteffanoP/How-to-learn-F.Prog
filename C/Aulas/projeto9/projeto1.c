#include <stdio.h>
#include <stdlib.h>

void e_cubo(int *i) {
  *i=(*i) * (*i) * (*i);
}

int main(int argc, char const *argv[]) {
  int x;
  scanf("%d",&x);
  e_cubo(&x);
  printf("%d",x);

  return 0;
}
