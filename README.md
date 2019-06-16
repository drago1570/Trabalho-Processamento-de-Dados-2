# Trabalho-Processamento-de-Dados-2

                       Sistema de estoque
                      
Escreva um programa que faça o gerenciamento de produtos em um estoque.
Para isso, o programa deve armazenar em um arquivo-texto as seguintes
informações:

 Primeiro dado: código do produto;
 Segundo dado: preço de atacado;
 Terceiro dado: preço de varejo;
 Quarto dado: tipo do produto (1-Cosmético; 2-Higiene; 3-Alimento);
 Quinto dado: quantidade disponível no estoque;

Com base nas informações contidas no arquivo, as seguintes operações devem
ser realizadas:

1. Cadastrar produto: lê as informações de um produto e inserir no arquivo;

2. Remover produto: remove as informações de um produto no arquivo.
Para isso, é preciso ser lido do usuário o código do produto que ele
deseja excluir. Caso não exista produto com o código informado, imprima
uma mensagem de erro para o usuário;

3. Imprimir preços médios: imprime o preço médio dos cosméticos,
produtos de higiene e alimentos (média entre produtos do mesmo tipo);

4. Informar produtos mais baratos: lista os códigos dos dez produtos mais
baratos considerando o preço de atacado, e depois lista os códigos dos
dez produtos mais baratos considerando o preço de varejo;

5. Informar dados estatísticos: informa a quantidade de produtos do tipo
cosmético, higiene e alimento.

Você deverá usar alocação dinâmica, pois não se sabe quantos itens há no
arquivo-texto. Além disso, seu código deve ter arquivos .h e .c organizando
funções, procedimentos e structs para os seguintes módulos, no mínimo:

1. Arquivos.h, Arquivos.c: módulo para manipulação dos arquivos textos.

2. InterfaceUsuario.h, InterfaceUsuario.c: módulo para apresentação de
mensagens para o usuário e entrada de dados. Deve implementar cada
uma das cinco funcionalidades mencionadas no parágrafo anterior.

3. Produto.h, Produto.c: módulo para as informações dos produtos. Deve
ter uma struct de nome Produto.

Se estes arquivos não possuírem funções, procedimentos ou structs que
atendam o propósito acima especificado, você perderá nota na conformidade
com a especificação.
Ademais, seu main() deve estar em um arquivo separado e deve ter no mínimo
3 linhas e no máximo 10 comandos úteis, isto é, chamadas de funções e/ou
procedimentos declarados em seus arquivos .h e .c e declaração de variáveis
que realmente estão sendo usadas. Entregar um main que não atenda estas
especificações, anula seu trabalho.
