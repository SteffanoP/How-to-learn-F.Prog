//Programa que identifica um termo da Sequencia de Fibonacci
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int qSeq;
  int n;
  int nAtu=0, nAnt=1,nSeq=0;

  printf("Diga o numero do termo da Sequencia ai cidadao\n");
  scanf("%d",&qSeq);

  for (n = 0; n < qSeq;n++) {
   nSeq = nAtu+nAnt;
   nAnt = nAtu;
   nAtu = nSeq;
  }

  printf("%d",nSeq);

  return 0;
}
