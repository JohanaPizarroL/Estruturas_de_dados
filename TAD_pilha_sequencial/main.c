#include <stdio.h>
#include <stdlib.h>

#include "pilha_sequencial.h"

int main() {
    
    PILHA* pilha1 = pilha_criar();
    PILHA* pilha2 = pilha_criar();

    ITEM* item;
    item = item_criar(3, NULL);
    pilha_empilhar(pilha1, item);
    pilha_empilhar(pilha1, item_criar(5, NULL)); // empilhando o segundo item

    for(int i = 0; i < 10; i++){
        pilha_empilhar(pilha2, item_criar(i, NULL));
    }


    printf("IMPRIMINDO A PILHA_1:\n");
    pilha_imprimir(pilha1);

    printf("IMPRIMINDO A PILHA_2:\n");
    pilha_imprimir(pilha2);

    printf("\nO tamanho da pilha1 eh: %d", pilha_tamanho(pilha1));
    printf("\nO tamanho da pilha2 eh: %d", pilha_tamanho(pilha2));

    pilha_desempilhar(pilha1);
    pilha_desempilhar(pilha2);
    pilha_desempilhar(pilha2);
    pilha_desempilhar(pilha2);
    
    printf("\nO tamanho da pilha1 eh: %d", pilha_tamanho(pilha1));
    printf("\nO tamanho da pilha2 eh: %d", pilha_tamanho(pilha2));

    printf("IMPRIMINDO A PILHA_1:\n");
    pilha_imprimir(pilha1);

    printf("IMPRIMINDO A PILHA_2:\n");
    pilha_imprimir(pilha2);

    pilha_apagar(&pilha1);
    pilha_apagar(&pilha2);

    return 0;
}
