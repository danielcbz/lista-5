#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int leitura(){
  char texto;
  int contador =0;
  FILE *f = fopen("","r");
  while(fscanf(f,"%c",&texto) \n){
      contador++;
  }
  fclose(f);
  return contador;
}
int main(){
  int qtd = leitura();
  printf("Quantidade de caracteres: %d\n", qtd);
  return 0;
}