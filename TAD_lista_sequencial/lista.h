#ifndef LISTA_H
    #define LISTA_H

    #define TAM_MAX 100 // estimativa tam max da nossa lista
    #define inicial 0 // define o tam inicial da lista sequencial
    #define ORDENADA 0 // 0 = não ordenada / 1 = ordenada
    #include "item.h"

    typedef struct lista_ LISTA;

    LISTA *lista_criar();
    bool lista_inserir(LISTA *lista, ITEM *item);
//insere elemento no final da lista sequencial não ordenada
    bool lista_inserir_posicao(LISTA *l, int pos, ITEM *item); 
//insere elemento no meio (ou em qualquer posicao)lista seq não ordenada 
    bool lista_apagar(LISTA **lista);
    ITEM *lista_remover(LISTA *lista, int chave);
    ITEM *lista_busca(LISTA *lista, int chave);
    int lista_busca_sequencial_ordenada(LISTA *l, int chave);
    int lista_tamanho(LISTA *lista);
    bool lista_vazia(LISTA *lista);
    bool lista_cheia(LISTA *lista);
    void lista_imprimir(LISTA *lista);

#endif