/* Programa que faz o uso de laços como While e For
1 - Intervalo decrescente de 99 à 33
2 - Intervalo de números pares entre 0 à 100
3 - Contabiliza os números primos entre um dado intervalo */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  system("color a");
  int i;
  int j;
  int k, l, m;

  int inc_intervalo;
  int fim_intervalo;

  printf("Intervalo 99 a 33\n");
  for(j=99;j>=33;j--) {
    printf("%d\n", j);
  }
  printf("\nPares 0 a 100\n");
  for(i=0;i<=100;i++) {
    printf("%d\n", i);
    i++;
  }
  printf("Números primos, diga o Intervalo\n");
  scanf("%i",&inc_intervalo);
  scanf("%i",&fim_intervalo);
  for(k = inc_intervalo; k <= fim_intervalo; k++) {
    for(l = 1; l <= k; l++) {
      if (!(k % l)) {
      m = m + 1;
      }
    }
    if(m == 2){
      printf("%i\n",k);
    }
    m = 0;
  }
  return 0;
}
