#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
  int var, *p;
  p = &var;
  *p = 10; 
  return 0;
}
