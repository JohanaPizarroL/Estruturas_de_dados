#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct no_ {
    ITEM *item;
    NO *anterior;
};

struct pilha_ {
    NO *topo;
    int tamanho;
};

bool pilha_existe(PILHA* pilha){
    if (pilha != NULL)
        return (true);
    else
        return (false);
}

PILHA* pilha_criar(void){

    PILHA* pilha = (PILHA*)malloc(sizeof(PILHA));

    if(pilha_existe(pilha)){
        pilha->topo = NULL;
        pilha->topo = NULL; // inicializando a pilha
        pilha->tamanho = 0;
    }
    return (pilha);
}

bool pilha_empilhar(PILHA* pilha, ITEM* item){ //criando um novo nó e adicionando na pilha

    if (pilha_existe(pilha) && !pilha_cheia(pilha)) {

        NO* novo = (NO *)malloc(sizeof(NO));
        if (novo != NULL){ // se existe...
            novo->item = item;
            novo->anterior = pilha->topo; // antetior nao existe, entao null
            pilha->topo = novo;
            (pilha->tamanho)++;
        }
        return (true);
    }
    return (false);
}

//funcao emplihar, adicioa um item criado anteriormente na funcao no_criar -> cria um novo no.
//adicionamos sempre na posicao do topo, mas como agora usamos ponteiros para referenciar os nós, apontamos o topo para esse novo nó, que estamos "empilhando"""

ITEM* pilha_desempilhar(PILHA* pilha){ //desempilha sempre o ultimo item adicionado
    if(pilha_existe(pilha) && !pilha_vazia(pilha)){
        //preciso retornar o item dentro desse nó
        NO* no_aux = (NO*)malloc(sizeof(NO));
        no_aux = pilha->topo;
        ITEM* item_aux = (ITEM*)malloc(sizeof(ITEM*));
        item_aux = pilha->topo->item;
        pilha->topo = pilha->topo->anterior;
        no_aux->anterior = NULL;
        free(no_aux);
        no_aux = NULL;
        pilha->tamanho--;
        return (item_aux);
    }
    return (NULL);
}

bool pilha_vazia(PILHA* pilha){
    if(pilha_existe(pilha)){
        if (pilha->tamanho == 0)
            return (true);
    }
    return (false);
}

bool pilha_cheia(PILHA *pilha){ //verificaca --> empilhando, se da certo, desempilha e ainda tem memoria
    if(pilha_existe(pilha)){
        NO* novo = (NO*)malloc(sizeof(NO));
        if(novo != NULL){
            free(novo);
            return (false);
        }
    }
    return (true);
}

void pilha_apagar(PILHA** pilha){
    //nao podemos apagar uma pilha que nao existe, so devemos fazer a sua verificaco
    if(pilha_existe(*pilha) && (!pilha_vazia(*pilha))){
        ITEM* it = pilha_desempilhar(*pilha);
        if(it !=  NULL)
            item_apagar(&it);
        free(*pilha);
        (*pilha) = NULL;
        //o pilha desempilhar já apaga o no, mas nao o item
        //pilha existe quando o tamanho = 0;
    }
}

int pilha_tamanho(PILHA *pilha){
    if(pilha_existe(pilha))
        return (pilha->tamanho);
    else
        return (-1);
}

ITEM *pilha_topo(PILHA *pilha){
    if(pilha_existe(pilha) && !pilha_vazia(pilha))
        return (pilha->topo->item);
    else
        return (NULL);
}


void pilha_imprimir(PILHA *pilha) {
    if (pilha_existe(pilha) && !pilha_vazia(pilha)) {
        printf("Imprimindo a pilha:\n");

        NO *no_atual = pilha->topo;

        while (no_atual != NULL) {
            if (no_atual->item != NULL) { 
                printf("%d\n", item_get_chave(no_atual->item)); 
            } else {
                printf("Item nulo encontrado no nó!\n");
            }
            no_atual = no_atual->anterior;
        }
    }
}

