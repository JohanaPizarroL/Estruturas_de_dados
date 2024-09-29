# Objetivo principal
all: item.o pilha.o main.o
	gcc item.o pilha.o main.o -o pilha

# Compilando item.o da pasta TAD_item
item.o: TAD_item/item.c
	gcc -c TAD_item/item.c -o item.o -std=c99 -Wall

# Compilando pilha.o
pilha.o: pilha.c
	gcc -c pilha.c -o pilha.o -std=c99 -Wall

# Compilando main.o
main.o: main.c
	gcc -c main.c -o main.o -std=c99 -Wall

# Limpando os arquivos objeto e executável
clean:
	rm -f *.o pilha

# Executando o programa
run:
	./pilha
