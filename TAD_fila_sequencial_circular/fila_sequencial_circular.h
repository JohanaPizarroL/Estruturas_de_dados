#ifndef FILA_SEQUENCIAL
    #define FILA_SEQUENCIAL

    #include <stdbool.h>
    #include "item.h"
    #define TAM_MAX 100

    typedef struct fila_ FILA;

    FILA* fila_criar(void);
    void fila_apagar(FILA** fila);
    bool fila_inserir(FILA* fila, ITEM* item);
    ITEM *fila_remover(FILA *fila);
    int fila_tamanho(FILA* fila);
    ITEM* fila_primeiro(FILA* fila);
    ITEM* fila_ultimo(FILA* fila);
    bool fila_vazia(FILA* fila);
    bool fila_cheia(FILA* fila);
    void fila_imprimir(FILA* fila);
    void fila_apagar_iterativa(FILA **fila);
    void fila_apagar_recursiva(FILA **fila);

    
#endif
