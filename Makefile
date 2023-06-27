# Makefile

.PHONY = clean

CC = gcc # c

codigo: programa.c
	${CC} programa.c -o programa.o

listar:
	ls

mkdir:
	mkdir diretorio
	cd diretorio

compile:
	./programa.o

clean:
	rm -rf *.o
