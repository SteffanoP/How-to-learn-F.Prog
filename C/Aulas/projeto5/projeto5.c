/* Programa que funciona como uma máquina de estado
Diretivo de compiladores e comando switch
Desenvolvido por Steffano Pereira */
#include <stdio.h>
#include <stdlib.h>

#define True 1
#define molhoLento 1
#define molhorapido 2
#define lavar 3
#define enxaguar 4
#define centrifugar 5
#define secar 6

#define PRINT(n) print

int main(int argc, char const *argv[]) {
  int estado = 0;

  printf("Diga o estado para lavagem\n");
  scanf("%d",&estado);
  while (True) {
    switch (estado) {
      case molhoLento:
        printf("Início do molho lento\n");
        sleep(5);
        printf("Fim do molho lento\n");
        estado++;
        break;

      case molhorapido:
        printf("Início do molho rápido\n");
        sleep(2);
        printf("Fim do molho rápido\n");
        estado++;
        break;

      case lavar:
        printf("Início da lavagem\n");
        sleep(5);
        printf("Fim da lavagem\n");
        estado++;
        break;

      case enxaguar:
        printf("Início do enxague\n");
        sleep(3);
        printf("Fim do enxague\n");
        estado++;
        break;

      case centrifugar:
        printf("BOM BOM BOM BOM BOM\n");
        sleep(1);
        printf("Fim da centrifgi\n");
        estado++;
        break;

      case secar:
        printf("Início da secagem\n");
        sleep(5);
        printf("Fim da secagem\n");
        estado++;
        break;

      default:
        printf("Ate a proxima!\n");
        break;
    }
  }
  return 0;
}
