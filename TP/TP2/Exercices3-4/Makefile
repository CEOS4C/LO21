tp2main: liste.o tp2main.o
	gcc -o tp2main liste.o tp2main.o
liste.o: liste.c
	gcc -o liste.o -c liste.c -W -Wall -ansi -pedantic
tp2main.o: tp2main.c liste.h
	gcc -o tp2main.o -c tp2main.c -W -Wall -ansi -pedantic

