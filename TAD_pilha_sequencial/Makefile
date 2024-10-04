# Objetivo principal
all: item.o pilha_sequencial.o main.o
	gcc item.o pilha_sequencial.o main.o -o pilha_sequencial

# Compilando item.o da pasta TAD_item
item.o: TAD_item/item.c
	gcc -c TAD_item/item.c -o item.o -std=c99 -Wall

# Compilando pilha_sequencial.o
pilha_sequencial.o: pilha_sequencial.c
	gcc -c pilha_sequencial.c -o pilha_sequencial.o -std=c99 -Wall

# Compilando main.o
main.o: main.c
	gcc -c main.c -o main.o -std=c99 -Wall

# Limpando os arquivos objeto e executável
clean:
	rm -f *.o pilha_sequencial

# Executando o programa
run:
	./pilha_sequencial
