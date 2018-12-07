#include <stdlib.h>
#include <stdio.h>

typedef struct {
  char nome[10];
  float altura;
  float peso;
} Corpo;

typedef struct {
  Corpo masculino;
  Corpo feminino;
} Casal;

int main(int argc, char const *argv[]) {
  Casal casal[50];
  printf("Diga o nome do rapaz\n");
  scanf("%s",casal[1].masculino.nome);
  printf("Diga a altura do rapaz\n");
  scanf("%f.2",&casal[1].masculino.altura);
  printf("Diga o peso do rapaz\n");
  scanf("%f.2",&casal[1].masculino.peso);
  printf("Diga o nome da mulher\n");
  scanf("%s",casal[1].feminino.nome);
  printf("Diga a altura da mulher\n");
  scanf("%f.2",&casal[1].feminino.altura);
  printf("Diga o peso da mulher\n");
  scanf("%f.2",&casal[1].feminino.peso);

  printf("O nome do rapaz eh %s e ela eh %s\n",casal[1].masculino.nome, casal[1].feminino.nome);
  printf("Ambos pesam cerca de %f e %f\n",casal[1].masculino.peso,casal[1].feminino.peso);
  printf("E tem %f e %f de altura\n",casal[1].masculino.altura,casal[1].feminino.altura);

  return 0;
}
