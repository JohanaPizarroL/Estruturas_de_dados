#include "pilha_sequencial.h"
#include "item.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct pilha {
    ITEM* item[TAM];
    int tamanho;
};

PILHA* pilha_criar(void){

    PILHA* pilha = (PILHA*)malloc(sizeof(PILHA));

    if(pilha != NULL)
        pilha->tamanho = 0;
    
    return (pilha);
}

bool pilha_cheia(PILHA* pilha){
    if (pilha != NULL)
        return ((pilha->tamanho == TAM) ? true : false);
    return (false);
}

bool pilha_vazia(PILHA* pilha){
    if(pilha != NULL)
        return ((pilha->tamanho == 0)? true : false);
    return (false);
}

int pilha_tamanho(PILHA* pilha){
    if(pilha != NULL)
        return (pilha->tamanho);
    return -1;
}

void pilha_apagar(PILHA **pilha){
    if(pilha != NULL){
        free(*pilha);
        *pilha = NULL;
    }
}

ITEM *pilha_topo(PILHA *pilha) { //retorna o item que está no topo da pilhaa
    ITEM* topo = (ITEM*) malloc(sizeof(ITEM*));
    topo = pilha->item[pilha->tamanho];
    return topo;
}

bool pilha_empilhar(PILHA *pilha, ITEM *item) {
    if((pilha != NULL) && !(pilha_cheia(pilha))){
        pilha->item[pilha->tamanho] = item;
        pilha->tamanho++;
        return (true);
    }
    return (false);
}

ITEM *pilha_desempilhar(PILHA *pilha) {
    ITEM* i;

    if((pilha != NULL)&& !(pilha_vazia(pilha))){
        i = pilha_topo(pilha);
        pilha->item[pilha->tamanho-1] = NULL;
        pilha->tamanho--;
        return (i);
    }
    return NULL; //se a pilha estiver vazia ou n existir
}

void pilha_imprimir(PILHA *pilha){
    if(pilha != NULL){
        for(int i = 0; i < (pilha->tamanho); i++){
            printf("%d\n", item_get_chave(pilha->item[i]));
        }
    }

}