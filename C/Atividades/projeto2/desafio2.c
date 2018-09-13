//Programa que transforma uma letra minúscula em maiúscula
//Desenvolvido por Steffano Pereira
#include <stdio.h>
#include <stdlib.h>

int main() {
  char letra;
  printf("Pressione uma letra\n");
  letra = getchar();
  if (letra > 96 && letra < 123) {
    putchar(letra-32);
  } else {
    putchar(letra);
  }
  return 0;
}
