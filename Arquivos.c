#include <stdlib.h>
#include <stdio.h>

#define FILENAME2 "cosmeticos.txt"
#define FILENAME3 "higiene.txt"
#define FILENAME4 "alimentos.txt"

void show_file(){
	
  FILE *arq;
  char Linha[100];
  char *result;
  int i=1;
  system("clear");
 
  arq = fopen("produtos.txt", "rt");
  if (arq == NULL){
	  system("clear");
     printf("Problemas na abertura do arquivo\n");  
  }
  while (!feof(arq))
  {
	
      result = fgets(Linha, 100, arq); 
      if (result) 
		printf("%s",Linha);
      i++;
  }
  fclose(arq);
}


FILE *arq(const char *arg, const char *mode) {
 
     FILE *fp;
     if(!(fp = fopen(arg, mode))) {
            fputs("Erro ao abrir arquivo\n", stdout);
            exit(EXIT_FAILURE);
      }
      return fp;
}


