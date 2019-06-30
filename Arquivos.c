#include <stdlib.h>
#include <stdio.h>
#include "Produtos.h"

void open_file(char *arq){
	
	FILE *file;
	file = fopen(arq,"w");
	
	if(file == NULL){
		printf("Erro ao tentar abrir o arquivo");
	}
}

void read_file(char *arq){
	
	FILE *file;
	file = fopen(arq,"r");
	
	if (file == NULL){
		printf("Erro ao tentar ler o arquivo");
	}
}

void remove_products(char *arq){
	
	
	
	}
		
