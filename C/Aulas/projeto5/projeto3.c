#include <stdio.h>
#include <stdlib.h>
#define For 1
#define Recursividade 2

int potencia(int,int);
int potenciaRecursividade(int,int);

int main(int argc, char const *argv[]) {
  int i;
  int j;
  int opcao;

  start:

  printf("Digite a base\n");
  scanf("%d",&i);
  printf("Digite o expoente\n");
  scanf("%d",&j);
  printf("De que modo deseja calcular?(for/recursividade)\n");
  scanf("%d",&opcao);

  switch (opcao) {
    case For:
    printf("%d",potencia(i,j));
    break;
    case Recursividade:
    printf("%d",potenciaRecursividade(i,j));
    break;
    default:
    printf("Opcao invalida, tente novamente...\n");
    goto start;
    break;
  }

  return 0;
}

int potencia(int i, int j) {
  int x;
  int anterior;
  anterior = i;
  for(x = 1; x <= (j-1); x++) {
    i = anterior*i;
  }
  return i;
}

int potenciaRecursividade(int i, int j) {
  if (j == 0) {
    return j = 1;
  } else {
    return i = (i*potenciaRecursividade(i,(j-1)));
  }
}
