#include <stdio.h>
#include <stdlib.h>

int strchr(char l[], int indice);

int main(int argc, char const *argv[]) {
  char leitura[50];
  char indice;

  printf("Diga a sua palavra:\n");
  gets(leitura);
  strchr(leitura, indice);
  printf("%s\n",leitura);
  printf("%s\n",indice);

  return 0;
}

/*void strchr(char l[]) {
  for (int i = 0; i < strlen(l); i++) {
    printf("%s\n",l[i]);
  }
  return l;
} */
