/*DESAFIO
Realizar uma divisão e Radiciação por meio de subtrações sucessivas
Desenvolvido por Steffano Pereira */

#include <stdlib.h>
#include <stdio.h>

int operacao;

int main(int argc, char const *argv[]) {
  printf("Bem vindo a calculadora que efetua seus ca'lculos apenas com subtracoes sucessivas!\n");
  printf("Operacoes disponiveis:\n1 - Divisao\n2 - Radiciacao\n");
  escolha:
  printf("Escolha a operacao que voce deseja fazer(digite 1 ou 2)\n");
  scanf("%d",&operacao);

  switch (operacao) {
    case 1:
      divisao();
      break;
    case 2:
      raiz();
      break;
    default:
      printf("Deixe de tentar aparecer cidadao e escolha uma opcao disponivel\n");
      goto escolha;
  }
  return 0;
}

void divisao() {
  int dividendo, divisor, quociente;

  printf("Diga o numero do Dividendo\n");
  scanf("%d",&dividendo);
  printf("Diga o numero do Divisor\n");
  scanf("%d",&divisor);

  for (quociente = 0;dividendo>0;quociente++){
    dividendo = dividendo - divisor;
  }

  printf("O quociente do seu numero e %d\n",quociente);
}

void raiz() {
  int raiz, operacoes, raizReal;
  int i;

  printf("Digite o radicando cidadao\n");
  scanf("%d",&raiz);

  raizReal = raiz;
  for (i = 0; raiz >= 0; i++) {
    raiz = raiz - operacoes;
    operacoes = operacoes + 2;
  }
  i = i - 1;

  printf("A raiz quadrada de %d e' %d",raizReal,i);
}
