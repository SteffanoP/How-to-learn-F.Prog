/* Programa que conversão da temperatura em Graus Fahrenheit em Graus conversaoCelsius
Uso de funções
Desenvolvido por Steffano Pereira */

#include <stdio.h>
#include <stdlib.h>
float conversaoCelsius(float);

int main(int argc, char const *argv[]) {
  float f;
  printf("Digite a temperatura em Fahrenheit\n", );
  scanf("%f",&f);
  printf("%06.2f",conversaoCelsius(f));
  return 0;
}

float conversaoCelsius(float f) {
  f = ((f-32.0)/1.8);
  return (f);
}
