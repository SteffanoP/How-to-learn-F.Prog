#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Cadastro_prof();
void Editar_prof();
void Listar_prof();
void Pesquisar_prof();

int profs_cadastrados=0;

typedef struct {
  char nome[50];
  int reputacao;
  int pontualidade;
  float media;
} cadastro;
  cadastro professores[50];

int main(int argc, char *argv[]){
  int opcao=0;

  printf("Bem Vindo ao programa de reputacao de professores,fique a vontade para falar mal \n");
  while (1) {
    scanf("%d",&opcao);
    switch (opcao) {
      case 1:
      Cadastro_prof();
      break;
      case 2:
      Editar_prof();
      break;
      case 3:
      //Excluir_prof();
      break;
      case 4:
      Listar_prof();
      break;
      case 5:
      Pesquisar_prof();
      break;
      case 6:
      printf("Ate' mais rapaz\n");
      system("PAUSE");
      return 0;
      break;
    }
  }
}

void Cadastro_prof() {
  int i=0,j;

  printf("Diga quantos professores deseja cadastrar");
  scanf("%d",&i);
  i += profs_cadastrados;
  for (j = profs_cadastrados; j < i; j++) {
    printf("Diga o nome de seu professor\n");
    fflush(stdin);
    scanf("%s",professores[j].nome);
    fflush(stdin);
    printf("Diga a reputacao do seu professor de 0 a 5\n");
    fflush(stdin);
    scanf("%d",&professores[j].reputacao);
    fflush(stdin);
    printf("Diga o quao pontual eh seu professor\n");
    scanf("%d",&professores[j].pontualidade);
    fflush(stdin);
    professores[j].media = ((professores[j].reputacao)+(professores[j].pontualidade))/2;
  }
  profs_cadastrados += i;
  j=0;
}

void Editar_prof() {
  int matricula;
  char opcao;
  printf("Para editar o cadastro de um professor, diga a Matricula\n");
  scanf("%d",&matricula);
  printf("Deseja editar a matricula %d de %s s/n?\n",matricula,professores[matricula].nome);
  scanf("%s",&opcao);
  if (opcao == 's') {
    printf("Diga o novo nome do professor\n");
    fflush(stdin);
    scanf("%s",professores[matricula].nome);
    fflush(stdin);
    printf("Diga a nova reputacao do seu professor\n");
    fflush(stdin);
    scanf("%d",&professores[matricula].reputacao);
    fflush(stdin);
    printf("Diga a nova pontualidade de seu professor\n");
    scanf("%d",&professores[matricula].pontualidade);
    professores[matricula].media = ((professores[matricula].reputacao)+(professores[matricula].pontualidade))/2;
  }
}

void Listar_prof() {
  for (int j = 0; j < profs_cadastrados; j++) {
    printf("Matricula:%d\n",j);
    fflush(stdin);
    puts(professores[j].nome);
    fflush(stdin);
    printf("Reputacao: %d/5\n",professores[j].reputacao);
    fflush(stdin);
    printf("Pontualidade: %d/5\n",professores[j].pontualidade);
    fflush(stdin);
    printf("Media de pontuacao: %.1f/5\n\n",professores[j].media);
  }
}

void Pesquisar_prof() {
  int j=0;
  char pesquisa_nome[50], opcao_editar;

  printf("Digite o nome do professor que voce deseja pesquisar\n");
  scanf("%s",&pesquisa_nome);

  while (strcmp(pesquisa_nome,professores[j].nome) != 0) {
    if (profs_cadastrados == j) {
      break;
    }
    j++;
  }
  if (strcmp(pesquisa_nome,professores[j].nome) == 0) {
    printf("Matricula:%d\n",j);
    fflush(stdin);
    puts(professores[j].nome);
    fflush(stdin);
    printf("Reputacao: %d/5\n",professores[j].reputacao);
    fflush(stdin);
    printf("Pontualidade: %d/5\n",professores[j].pontualidade);
    fflush(stdin);
    printf("Media de pontuacao: %.1f/5\n\n",professores[j].media);
    printf("Deseja alterar os dados desse professor?s/n");
    scanf("%s",&opcao_editar);
    if (opcao_editar == 's') Editar_prof();
  } else {
    printf("Desculpe, nome nao encontrado tente novamente\n");
  }

  j=0;
}