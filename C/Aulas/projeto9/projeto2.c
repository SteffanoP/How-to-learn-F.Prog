#include <stdio.h>
#include <stdlib.h>

int A (int a) { return a*a; }
int B (int b) { return b*b*b; }

int main(int argc, char const *argv[]) {
  int (*p)(int);
  int x2, x3;
  p = &A;
  x2 = (*p)(2);
  p = &B;
  x3 = (*p)(3);
  printf("x2 = %d, x3 = %d\n", x2,x3);
  return 0;
}
