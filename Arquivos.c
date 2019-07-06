#ifndef _ARQUIVOS_H_
#define _ARQUIVOS_H_

#include "Arquivos.c"

//Structs para a leitura dos dados dos arquivos txt

typedef struct{
	int	vet_cosmetico_codigo,vet_cosmetico_tipo;
	float vet_cosmetico_prec_atk,vet_cosmetico_prec_var,vet_cosmetico_qntd;
}_Vet_Cosmetico;

typedef struct{
	int	vet_higiene_codigo,vet_higiene_tipo;
	float vet_higiene_prec_atk,vet_higiene_prec_var,vet_higiene_qntd;
}_Vet_Higiene;

typedef struct{
	int	vet_cosmetico_codigo,vet_cosmetico_tipo;
	float vet_cosmetico_prec_atk,vet_cosmetico_prec_var,vet_cosmetico_qntd;
}_Vet_Alimento;

//Procedimentos para manipulação de arquivos

void show_file();
FILE *arq(const char *arg, const char *mode);

#endif
