#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "liste_mots.h"

#define BUFFER_SIZE 100

void viderBuffer() {
    int c = 0;
    while (c != '\n' && c != EOF) {
        c = getchar();
    }
}

int lire(char *Buffer) {
    char *positionEntree = NULL;
    viderBuffer();
    if (fgets(Buffer, 100, stdin) != NULL) {
        positionEntree = strchr(Buffer, '\n');
        if (positionEntree != NULL)
        {
            *positionEntree = '\0';
        } else {
            viderBuffer();
        }
        return 1;
    } else {
        viderBuffer();
        return 0;
    }
}

void afficherMenu() {
    printf("(1) ajouter en tête, (2) ajouter en queue, (3) supprimer en tête, (4) supprimer en queue, (0) Quitter.\n");
}

int main() {
    Dl_List liste = NULL;
    char buffer[BUFFER_SIZE];

    while (1) {
        printf("La liste est : ");
        affiche_liste(liste);
        afficherMenu();
        int choix;

        if (!lire(buffer)) {
            printf("Erreur de saisie.\n");
            continue;
        }

        choix = atoi(buffer);

        if (choix == 0) {
            break;
        } else if (choix == 1 || choix == 2) {
            printf("Mot à ajouter?\n");

            if (!lire(buffer)) {
                printf("Erreur de saisie.\n");
                continue;
            }

            if (choix == 1) {
                liste = insertion_tete(liste, buffer);
            } else if (choix == 2) {
                liste = insertion_queue(liste, buffer);
            }
        } else if (choix == 3 || choix == 4) {
            if (choix == 3) {
                liste = supprimer_tete(liste);
            } else if (choix == 4) {
                liste = supprimer_queue(liste);
            }
        } else {
            printf("Choix non valide.\n");
        }
    }

    printf("Au revoir.\n");
    return 0;
}

