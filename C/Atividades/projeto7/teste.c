#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char origem[50]="Justino";
  char dest[50]="";
  printf("%s\n",strncopy(dest,origem+3,5));
  return 0;
}
