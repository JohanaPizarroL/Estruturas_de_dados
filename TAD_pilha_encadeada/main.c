#include <stdio.h>
#include "pilha.h"

int main(void){

    PILHA* pilha = pilha_criar(); //criando a pilha
    ITEM* item = item_criar(11, NULL); //criando itens para empilhar

    pilha_empilhar(pilha, item);
    pilha_empilhar(pilha, item_criar(22, NULL));
    pilha_empilhar(pilha, item_criar(33, NULL));
    pilha_empilhar(pilha, item_criar(44, NULL));
    pilha_empilhar(pilha, item_criar(100, NULL)); //atual topo
    
    printf("O tamanho da pilha eh: %d\n", pilha_tamanho(pilha));
    printf("O topo da pilha eh: %d\n", item_get_chave(pilha_topo(pilha)));
    pilha_imprimir(pilha);

    pilha_desempilhar(pilha);
    printf("O tamanho da pilha eh: %d\n", pilha_tamanho(pilha));
    printf("O topo da pilha eh: %d\n", item_get_chave(pilha_topo(pilha)));
    pilha_imprimir(pilha);
    pilha_apagar(&pilha);

    return 0;
}