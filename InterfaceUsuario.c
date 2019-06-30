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
	
	if(escolha==1){
		system("clear");	
		Interface_cadastro();
	}
	
	if(escolha==2){
		Interface_remove();
	}
	
	if(escolha==3){
		print_mediunprice();
	}
	
	if(escolha==4){
		print_cheapprice();
	}
	
	if(escolha==5){
		print_statistcs();
	}

	if(escolha==6){
		exit(EXIT_SUCCESS);		
	}
}

void Interface_cadastro(){
	
	int i,a,qntd;


	printf("Quantidade de produtos que deseja cadastrar: ");
	scanf("%d",&qntd);
	
	system("clear");

	FILE *file;
	
	file = fopen(FILENAME,"w");
	
	_Produtos Produtos;
	
	_Produtos vetor[qntd];
	
	for(i=0;i<qntd;i++){
		
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
	
		fprintf(file,"PRODUTO %d",i+1);
		fprintf(file,"\n\nCodigo: %d\n",vetor[i].codigo);
		fprintf(file,"Preço atacado: %.2f\n",vetor[i].preco_atk);
		fprintf(file,"Preço varejo: %.2f\n",vetor[i].preco_var);
		fprintf(file,"Tipo de produtos(1-Cosmético; 2-Higiene; 3-Alimento): %d\n",vetor[i].tipo);
		fprintf(file,"Quantidade no estoque: %.2f\n",vetor[i].quantidade);
		fprintf(file,"\n---------------------------------------------------------\n");
		
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
