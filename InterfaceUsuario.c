#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void menu_principal(){
	
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
	system("cls");
	
}

