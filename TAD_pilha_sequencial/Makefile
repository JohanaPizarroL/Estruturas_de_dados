all: item.o pilha_sequencial.o main.o
	gcc item.o pilha_sequencial.o main.o -o pilha_sequencial


pilha_sequencial.o:
	gcc -c pilha_sequencial.c -o pilha_sequencial.o -std=c99 -Wall


main.o:
	gcc -c main.c -o main.o -std=c99 -Wall

clean:
	rm -f *.o pilha_sequencial

run:
	./pilha_sequencial