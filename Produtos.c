//Este codigo não tem nada a ver com o proposito,
//qua é levantar os dados sobre  o produto, apenas 
//mostra na tela o que tem no arquivo.

#include <stdio.h>
#include <stdlib.h>
#include "Produtos.h"
#include "InterfaceUsuario.h"


void price_mediun(){
	
  FILE *arq;
  char Linha[100];
  char *result;
  int i;
  system("clear");
 
  arq = fopen(FILENAME, "rt");
  if (arq == NULL) 
   
  {
     printf("Problemas na abertura do arquivo\n");  
  }
  i = 1;
  while (!feof(arq))
  {
	
      result = fgets(Linha, 100, arq); 
      if (result) 
		printf("%s",Linha);
      i++;
  }
  fclose(arq);
}

int main(){
	
	price_mediun();
	
}	 
		
