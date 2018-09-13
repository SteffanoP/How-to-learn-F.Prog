//Programa que faz cálculo para a produção de latão
//Desenvolvido por Steffano Pereira
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int quantidadeLatao;
  int quantidadeCobre, quantidadeZinco;
  printf("Qual a quantidade(em kg) de latao que voce quer produzir?\n");
  scanf("%d",&quantidadeLatao);

  quantidadeCobre = quantidadeLatao*7;
  quantidadeZinco = quantidadeLatao*3;

  printf("As quantidades de produtos necessarios sao:\n");
  printf("Sao necessarios %dkg de Cobre\n",quantidadeCobre);
  printf("Sao necessarios %dkg de Zinco",quantidadeZinco);

  return 0;
}
