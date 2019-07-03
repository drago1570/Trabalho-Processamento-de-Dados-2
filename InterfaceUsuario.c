#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "Arquivos.h"
#include "Produtos.h"
#include <string.h>

#define FILENAME "produtos.txt"

void Interface_cadastro();
void Interface_remove();
void print_mediunprice();
void print_cheapprice();
void print_statistcs();	

_Produtos Produtos;
	
_Produtos vetor[100];

void menu_principal(){
	
	int escolha;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\t\t\t**************************************\n");
	printf("\t\t\t*Sistema de Cadastramento de produtos*\n");
	printf("\t\t\t**************************************\n");
	
	printf("\n\n[1]Cadastrar produto\n");
	printf("[2]Remover produto\n");
	printf("[3]Preço médio dos produtos\n");
	printf("[4]Produtos mais baratos\n");
	printf("[5]Dados estatisticos\n");
	printf("[0]Sair\n\n");
	printf("[*]Escolha uma opção: ");
	scanf("%d",&escolha);
	
	switch(escolha){
	
		case 1:
			system("clear");	
			Interface_cadastro();
			break;
	
		case 2:
			Interface_remove();
			break;
	
		case 3:
			print_mediunprice();
			break;
	
		case 4:
			print_cheapprice();
			break;
	
		case 5:
			print_statistcs();
			break;
			
		default:
			printf("Comando Invalido!");
			exit(EXIT_FAILURE);
			
		}
}

void Interface_cadastro(){
	
	int i,a;
	
	system("clear");

	FILE *file;
	
	file = fopen(FILENAME,"w");
	
	_Produtos Produtos;
	
	_Produtos vetor[100];
	
	for(i=0;i<100;i++){
		
		printf("\t\t\tCADASTRO\n\n\n");
		
		printf("Código do produto: ");
		scanf("%d",&Produtos.codigo);
		printf("Preço do atacado: ");
		scanf("%f",&Produtos.preco_atk);
		printf("Preço do varejo: ");
		scanf("%f",&Produtos.preco_var);
		printf("Tipo do produto (1-Cosmético; 2-Higiene; 3-Alimento): ");
		scanf("%d",&Produtos.tipo);
		printf("Quantidade disponivél no estoque: ");
		scanf("%f",&Produtos.quantidade);
		vetor[i] = Produtos;
	
		fprintf(file,"%d	|	%.2f	|	%.2f	|%d|	%.2f\n",vetor[i].codigo,
		vetor[i].preco_atk,vetor[i].preco_var,vetor[i].tipo,vetor[i].quantidade);
		
		printf("\nVoce deseja adicionar mais produtos?(1-S/2-N): ");

		scanf("%d",&a);
		
		if(a ==1){
			system("clear");
			continue;
		}
			
		if(a==2){
			break;

		}
	}
}

void Interface_remove(){
	
	int i,a;
	
	_Produtos Produtos;
	
	for(i=0;i<100;i++){
	printf("Digite o código do produto a remover: ");
	scanf("%d",&Produtos.tipo);
	
	scanf("%d",&a);
	printf("\nDeseja remover mais algum produto?(1-S/2-N)");
	
	if(a==1)
		continue;
		
	if(a==2)
		break;
	
	
	printf("Deseja remover mais produtos? (1-S/2-N): ");
	}
}



void print_mediunprice(){
	
	//printf("Preço medio dos produtos: %.2f");
}

void print_cheapprice(){
}

void print_statistcs(){
}
