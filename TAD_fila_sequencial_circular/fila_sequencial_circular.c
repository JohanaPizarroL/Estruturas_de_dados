#include <stdio.h>
#include <stdlib.h>
#include "fila_sequencial_circular.h"

struct fila_{
    ITEM* itens[TAM_MAX];
    int inicio;
    int fim;
    int total; //tamanho final da fila
};

bool fila_existe(FILA* fila){
    if(fila != NULL)
        return(true);
    else
        return(false);
}

FILA* fila_criar(void){
    FILA* fila = (FILA*)malloc(sizeof(FILA));
    if(fila != NULL){
        fila->inicio = 0;
        fila->fim = 0;
        fila->total = 0;
    }
    return (fila);
}

bool fila_cheia(FILA* fila){
    if(fila_existe(fila))
        return(fila->total == TAM_MAX);
    else
        return(NULL);
}

bool fila_vazia(FILA* fila){
    if(fila_existe(fila))
        return(fila->total == 0);
    else
        return(false);
}

bool fila_inserir(FILA* fila, ITEM* item){
    if(fila != NULL && !fila_cheia(fila)){
        fila->itens[fila->fim] = item; //sempre insere no final da fila
        fila->fim = (fila->fim + 1) % TAM_MAX; //volta ao indice inicial do vetor
        fila->total++;
        return(true);
    }
    return(false);
}

ITEM* fila_remover(FILA* fila){ //sempre remove do inicio da fila
    if(fila != NULL && (!fila_vazia(fila))){
        ITEM* item_removido = fila->itens[fila->inicio]; //item auxiliar para guardar o item a ser removido
        fila->itens[fila->inicio] = NULL; //inicio pq sempre removemos do inicio
        fila->inicio = (fila->inicio + 1) % TAM_MAX;
        fila->total--;
        //printf("removido com successo!\n");
        return (item_removido);
    }
    return(NULL);
}

ITEM* fila_primeiro(FILA* fila){
    if(fila_existe(fila) && !fila_vazia(fila))
        return(fila->itens[fila->inicio]); 
    else
        return(NULL);
}

ITEM* fila_ultimo(FILA *fila){
    if (fila_existe(fila) && !fila_vazia(fila)){
            int ultimo = (fila->fim - 1 + TAM_MAX) % TAM_MAX;
        return (fila->itens[ultimo]);
    }else
        return(NULL);
}

int fila_tamanho(FILA *fila){
    if(fila_existe(fila))
        return(fila->total);
    else
        return(0);
}

void fila_apagar(FILA **fila){
    if(fila_existe(*fila)){
        free(*fila);
        *fila = NULL;
    }
}

void fila_imprimir(FILA* fila) {
    if (fila_existe(fila)) {
        int i = fila->inicio;
        int count = 0;
        while (count < fila->total){
            printf("%d ", item_get_chave(fila->itens[i]));
            i = (i + 1) % TAM_MAX;
            count++;
            if (count < fila->total)
                printf("-> ");
        }
        printf("\n\n");
    }
}

void fila_apagar_iterativa(FILA **fila) {
    if (fila_existe(*fila)) {
        for (int i = 0; i < (fila_tamanho(*fila)); i++) {
            if ((*fila)->itens[i] != NULL) {
                free((*fila)->itens[i]);
                (*fila)->itens[i] = NULL;
            }
        }
        free(*fila);
        *fila = NULL;
        printf("Apaguei a fila com sucesso!\n");
    } 
}

void fila_apagar_recursiva(FILA **fila) {
    if (*fila == NULL) {
        return;
    }
    if (fila_vazia(*fila)) {
        free(*fila);
        *fila = NULL;
        return;
    }
    ITEM *item = fila_remover(*fila);
    if (item != NULL) {
        free(item);
    }
    fila_apagar_recursiva(fila);
    printf("Apaguei a fila com sucesso!\n");
}