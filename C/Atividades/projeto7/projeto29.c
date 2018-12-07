#include <stdio.h>
#include <stdlib.h>

void strupr(char l[]);

int main(int argc, char const *argv[]) {
  char leitura[50];

  printf("Diga a sua palavra:\n");
  gets(leitura);
  strupr(leitura);
  printf("%s\n",leitura);

  return 0;
}

void strupr(char l[]) {
  for (int i = 0; i < strlen(l); i++) {
    l[i] -= 32;
  }
  return l;
}
