#include <stdlib.h>
#include <stdio.h>
#include "Produtos.h"

#define FILENAME "produtos.txt"

void open_file(const char arq){
	
	FILE *file;
	file = fopen(FILENAME,"w");
	
	if(file == NULL){
		printf("Erro ao tentar abrir o arquivos");
	}
	
