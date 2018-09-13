/*Programa que identifica o numero de cabeças e pés de coelhos e patos
e realiza o cálculo do número total de coelhos e patos */
//Desenvolvido por Steffano Pereira

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  //Variaveis
  int patos;
  int coelhos;
  int cabecas = 0;
  int pes = 0;

  //Scan
  printf("Qual o numero de cabecas?");
  scanf("%d",&cabecas);
  printf("Qual o numero de patas?");
  scanf("%d",&pes);

  //Calcs
  coelhos = (((-2*cabecas) + pes)/2);
  patos = cabecas - coelhos;

  //Resultados
  printf("Voce tem %d coelhos e %d patos",coelhos,patos);
  return 0;
}
