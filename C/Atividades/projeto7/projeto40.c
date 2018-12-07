#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mid(char[], char[], int, int);

int main(int argc, char const *argv[]) {
  char nome[50];
  char corte[50] = "";
  int inicio,tamanho;
  printf("Diga o nome que voce deseja cortar\n");
  scanf("%s",&nome);
  printf("Diga a partir do nu'mero do caractere de onde voce deseja cortar\n");
  scanf("%d",&inicio);
  printf("Diga o tamanho do corte\n");
  scanf("%d",&tamanho);
  mid(nome,corte,inicio,tamanho);
  printf("%s\n",corte);
  return 0;
}

void mid(char origem[50], char dest[50], int inicio, int n) {
  strncpy(dest,origem+inicio,n);
}
