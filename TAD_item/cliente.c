#include <stdio.h>
#include <stdlib.h>
#include "item.h"


int main (void){
	//definindo o item
	ITEM *item;
	int dado=10;

	//criando o item: chave e componente. O tratamento do item
	//é responsabilidade do cliente.
	item = item_criar(1, &dado);

	item_set_chave(item, 2);
	int chave = item_get_chave(item);
	printf("\n chave: %d\n", chave );

	//Imprimindo o componente. O cliente é quem decide e sabe
	//o que ele é e como tratá-lo.
	int *dados = item_get_dados(item);
	printf("componente: %d", *dados);
	
	item_apagar(&item);
	
	return(0);
}