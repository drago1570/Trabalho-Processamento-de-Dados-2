#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "Produtos.h"
#include "Arquivos.h"
#include <string.h>

void Interface_cadastro();
void Interface_remove();


void menu_principal(){
	
	_Choice choice;
		
	setlocale(LC_ALL, "Portuguese");
	
	do{
	
	printf("\t\t\t**************************************\n");
	printf("\t\t\t*Sistema de Cadastramento de produtos*\n");
	printf("\t\t\t**************************************\n");
	
	printf("\n\n[1]Cadastrar produto\n");
	printf("[2]Remover produto\n");
	printf("[3]Preço médio dos produtos\n");
	printf("[4]Produtos mais baratos\n");
	printf("[5]Dados estatisticos\n");
	printf("[6]Mostrar Produtos\n");
	printf("[7]Limpar Cadastros\n");
	printf("[0]Sair\n\n");
	printf("[*]Escolha uma opção: ");
	scanf("%d",&choice.escolha);
	
	switch(choice.escolha){
	
		case 1:
			system("clear");	
			Interface_cadastro();
			break;
	
		case 2:
			system("clear");
			break;
	
		case 3:
			system("clear");
			break;
	
		case 4:
			system("clear");
			break;
	
		case 5:
			system("clear");
			break;
			
		case 6:
			show_file();
			break;
			
		case 7:{
			
			//FILE *file,*file_cosmeticos,*file_higiene,*file_alimentos;
			clean_file("produtos.txt");
			clean_file("cosmeticos.txt");
			clean_file("higiene.txt");
			clean_file("alimentos.txt");
			break;
		}
		
	}
	}while(choice.escolha==0);
}

void Interface_cadastro(){
	
	int i,a;
	
	FILE *file = arq("produtos.txt", "a");
	FILE *file_cosmeticos = arq("cosmeticos.txt", "a");
	FILE *file_higiene = arq("higiene.txt", "a");
	FILE *file_alimentos = arq("alimentos.txt", "a");
	
	system("clear");
	
	_Produtos Produtos;
	
	_Produtos vetor[100];
	
	for(i=0;i<100;i++){
		
		printf("\t\t\tCADASTRO\n\n\n");
		
		printf("\nO codigo contem 5 numeros!\n\n");
		
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
		
		if(vetor[i].tipo==1){
			fprintf(file_cosmeticos,"%d	%.2f	%.2f	%d	%.2f\n",
			vetor[i].codigo,vetor[i].preco_atk,vetor[i].preco_var,vetor[i].tipo,vetor[i].quantidade);
		}
			
		if(vetor[i].tipo==2){	
			fprintf(file_higiene,"%d	%.2f	%.2f	%d	%.2f\n",
			vetor[i].codigo,vetor[i].preco_atk,vetor[i].preco_var,vetor[i].tipo,vetor[i].quantidade);
		}
		
		if(vetor[i].tipo==3){
			fprintf(file_alimentos,"%d	%.2f	%.2f	%d	%.2f\n",
			vetor[i].codigo,vetor[i].preco_atk,vetor[i].preco_var,vetor[i].tipo,vetor[i].quantidade);
		}
	
		fprintf(file,"Codigo: %d\n",vetor[i].codigo);
		fprintf(file,"Preço atacado: %.2f\n",vetor[i].preco_atk);
		fprintf(file,"Preço Varejo: %.2f\n",vetor[i].preco_var);
		fprintf(file,"Tipo do produto (1-Cosmético; 2-Higiene; 3-Alimento): %d\n",vetor[i].tipo);
		fprintf(file,"Quantidade: %d\n",vetor[i].tipo);
		fprintf(file,"\n-----------------------------------------------------------\n");
		
		printf("\nVoce deseja adicionar mais produtos?(1-S/2-N): ");

		scanf("%d",&a);
		
		if(a ==1){
			system("clear");
			continue;
		}
			
		if(a==2){
			break;
			printf("Produtos cadastrados com sucesso!");
		}
	}
	
	if(fclose(file)==0 && fclose(file_cosmeticos)==0 && fclose(file_higiene)==0 && fclose(file_alimentos)==0){
		printf("\nProdutos salvos com sucesso!");
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
