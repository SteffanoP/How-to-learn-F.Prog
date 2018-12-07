#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strinv(char[]);

int main(int argc, char const *argv[]) {
  char leitura[50];
  char resultado[50];

  printf("Diga a sua palavra:\n");
  gets(leitura);
  strinv(leitura);

  return 0;
}

void strinv(char l[]) {
  int tamanho;
  char inverso[50];
  int j = 0;

  tamanho = strlen(l);

  for (int i = tamanho; i > 0; i--,j++) {
    inverso[j] = l[i];
    printf("opa\n");
  }
  puts(inverso);
}
