/*Programas:
1 - Diz o valor da resistencia série entre 3 resistores
2 - Diz a media entre 2 notas
*/

#include <stdio.h>
#include <stdlib.h>

int res1;
int res2;
int res3;
int resq;

float media1;
float media2;
float mediat;

int programa;

int main(int argc, char *argv[])
{
  printf("Qual o programa?");
  scanf("%d",&programa);
 if (programa == 1) {
    printf("Quais são os resistores?");
    scanf("%d",&res1);
    printf("Qual o resistor 2?");
    scanf("%d",&res2);
    printf("Qual o resistor 3?");
    scanf("%d",&res3);
    resq = res1 + res2 + res3;
    printf("A Resistencia equivalente e: %d\n",resq);
  }
  if (programa == 2) {
    printf("Qual a media 1?");
    scanf("%f",&media1);
    printf("Qual a media 2?");
    scanf("%f",&media2);
    mediat = ((media1 + media2)/2);
    printf("A media foi de %2.f",mediat);
  }
  system("PAUSE");
  return 0;
}
