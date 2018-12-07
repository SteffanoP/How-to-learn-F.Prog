#include <stdio.h>
#include <stdlib.h>

int i;

int main(int argc, char *argv[])
{
    struct cadastro {
      char nome[50];
      char apelido[50];
      int reputacao;
      int pontualidade;
    };
    struct cadastro professores[50],*p;

    p = professores;

    printf("Bem Vindo ao programa de reputacao de professores,fique a vontade para falar mal \n Diga quantos professores deseja cadastrar");
    scanf("%d",&i);

    int j;
    for (j = 0; j < i; j++,p++) {
      printf("Diga o nome de seu professor\n");
      fflush(stdin);
      gets(p->nome);
      fflush(stdin);
      printf("Diga o nome do apelido dele\n");
      gets(p->apelido);
      fflush(stdin);
      printf("Diga a reputacao do seu professor de 0 a 5\n");
      fflush(stdin);
      scanf("%d",&p->reputacao);
      fflush(stdin);
      printf("Diga o quao pontual eh seu professor\n");
      scanf("%d",&p->pontualidade);
      fflush(stdin);
    }
    p-=i;

    for (j = 0; j < i; j++,p++) {
      puts(p->nome);
      fflush(stdin);
      puts(p->apelido);
      fflush(stdin);
      printf("Reputacao: %d /5\n",p->reputacao);
      fflush(stdin);
      printf("Pontualidade: %d /5\n",p->pontualidade);
      fflush(stdin);
    }

  system("PAUSE");
  return 0;
}
