#ifndef _PRODUTOS_H_
#define _PRODUTOS_H_

#include "Produtos.c"

typedef struct{
	
	int codigo,tipo;
	float preco_atk,preco_var,quantidade;
	
}_Produtos;

typedef struct{
	
	int escolha;
}_Choice;

void mediun_price(const char *arq);
void cheap_price_atacado(const char *arq);
void cheap_price_varejo(const char *arq);

#endif
