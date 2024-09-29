
#ifndef PILHA_ENCADEADA_H
    #define PILHA_ENCADEADA_H

    #include <stdbool.h>
    #include "item.h"


    typedef struct no_ NO;
    typedef struct pilha_ PILHA;

    PILHA* pilha_criar(void);
    void pilha_apagar(PILHA** pilha);
    bool pilha_vazia(PILHA *pilha);
    bool pilha_cheia(PILHA *pilha);
    int pilha_tamanho(PILHA *pilha);
    ITEM* pilha_topo(PILHA *pilha);
    bool pilha_empilhar(PILHA *pilha, ITEM *item);
    ITEM* pilha_desempilhar(PILHA *pilha);
    void pilha_imprimir(PILHA *p);


#endif
