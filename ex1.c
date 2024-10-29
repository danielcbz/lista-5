#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/*crie um programa que escreva de 1 até 10 em um arquivo, armazenando um número por linha.
Exemplo Entrada
NENHUMA
Saída Esperada:
(DENTRO DO ARQUIVO)
1
2
3
4
5
6
7
8
9
10*/
void contador(){
  FILE *ponteiro = fopen("arquivo.txt", "a");
  for(int i = 1; i<10; i++){
    fprintf(ponteiro,"%d",i);
    printf("%d\n",i);
  fprintf(ponteiro,"\n");
  }
  fclose(ponteiro);
}
int main(){
  contador();
  return 0;
}