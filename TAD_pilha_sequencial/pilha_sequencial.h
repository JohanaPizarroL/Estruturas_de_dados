#ifndef PILHA_SEQUENCIAL_H
    #define PILHA_SEQUENCIAL_H

    #include "item.h"
    #include <stdbool.h>

    #define TAM 1005

    typedef struct pilha PILHA;

    PILHA *pilha_criar(void);
    void pilha_apagar(PILHA **pilha);
    bool pilha_vazia(PILHA *pilha);
    bool pilha_cheia(PILHA *pilha);
    int pilha_tamanho(PILHA *pilha);
    ITEM *pilha_topo(PILHA *pilha);
    bool pilha_empilhar(PILHA *pilha, ITEM *item);
    ITEM *pilha_desempilhar(PILHA *pilha);
    void pilha_imprimir(PILHA* pilha);

#endif