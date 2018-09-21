/* Programa que realiza um cálculo por meio de macros
Funções Macros
Desenvolvido por Steffano Pereira */
#include <stdio.h>
#include <stdlib.h>

#define CAP(c,a,d) (c*(a/d))

int main(int argc, char const *argv[]) {
  float a,d,c;
  printf("Diga a area");
  scanf("%f",&a);
  printf("Diga o diametro");
  scanf("%f",&d);
  printf("Diga a constante dieletrica");
  scanf("%f",&c);

  printf("A capacitancia sera de %.2f\n",CAP(c,a,d));

  return 0;
}
