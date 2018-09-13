//Programa de print das idents declaradas pelo usuário
#include <stdio.h>
#include <stdlib.h>

char nome[50];
int idade;
char sexo[50];

int main(int argc, char *argv[]){
  printf("Qual teu Nome?\n");
  scanf("%s",nome);
  printf("Qual tua idade\n");
  scanf("%d",&idade);
  printf("Qual teu sexo?\n");
  scanf("%s",sexo);
  printf("Voce e %s tem %d anos e e %s", nome, idade, sexo);
  system("PAUSE");
  return 0;
}
