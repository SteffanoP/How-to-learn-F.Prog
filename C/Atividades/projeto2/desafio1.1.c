/*Programa que identifica o numero de coelhos e patos e realiza
o cálculo do número total de cabeças e pés de coelhos e patos */
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
  printf("Qual o numero de patos?");
  scanf("%d",&patos);
  printf("Qual o numero de coelhos?");
  scanf("%d",&coelhos);

  //Calcs
  cabecas = patos + coelhos;
  pes = (patos*2) + (coelhos*4);

  //Resultados
  printf("Voce tem %d cabecas e %d pes",cabecas,pes);
  return 0;
}
