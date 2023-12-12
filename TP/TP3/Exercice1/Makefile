test_liste_mots_01: liste_mots.o test_liste_mots_01.o
	gcc -o test_liste_mots_01 liste_mots.o test_liste_mots_01.o
liste_mots.o: liste_mots.c
	gcc -o liste_mots.o -c liste_mots.c -W -Wall -ansi -pedantic
test_liste_mots_01.o: test_liste_mots_01.c liste_mots.h
	gcc -o test_liste_mots_01.o -c test_liste_mots_01.c -W -Wall -ansi -pedantic
