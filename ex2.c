#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void textous(){
  char texto[100];
  fgets(texto, sizeof(texto), stdin);
  FILE *f = fopen("saida.txt", "w");
    fprintf(f, "%s", texto);
    fclose(f);
}
int contador(){
  int contador = 0;
  char  texto;
  FILE *f = fopen("saida.txt","r");
   while ((texto = fgetc(f)) != EOF) {
  if(texto == 'a' || texto == 'A'){
  contador++;
  }
}
fclose(f);
return contador;
}
int main(){
  textous();
  int qtdc= contador();
  printf("%d", qtdc);
  return 0;
}