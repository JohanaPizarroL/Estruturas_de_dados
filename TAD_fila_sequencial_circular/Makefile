# Objetivo principal
all: item.o fila_sequencial_circular.o main.o
	gcc item.o fila_sequencial_circular.o main.o -o fila_sequencial_circular

# Compilando item.o da pasta TAD_item
item.o: TAD_item/item.c
	gcc -c TAD_item/item.c -o item.o -std=c99 -Wall

# Compilando fila_sequencial_circular.o
fila_sequencial_circular.o: fila_sequencial_circular.c
	gcc -c fila_sequencial_circular.c -o fila_sequencial_circular.o -std=c99 -Wall

# Compilando main.o
main.o: main.c
	gcc -c main.c -o main.o -std=c99 -Wall

# Limpando os arquivos objeto e executável
clean:
	rm -f *.o fila_sequencial_circular

# Executando o programa
run:
	./fila_sequencial_circular
