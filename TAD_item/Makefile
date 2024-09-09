all: item.o cliente.o
	gcc item.o cliente.o -o cli -std=c99 -Wall

item.o:
	gcc -c item.c -o item.o	
	
cliente.o:
	gcc -c cliente.c -o cliente.o
	 
clean:
	rm *.o cli
