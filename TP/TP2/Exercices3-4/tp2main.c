#include <stdio.h>
#include "liste.h"

int main() {
    List liste = NULL;

    liste = ajout_tete(liste, 1, 5, 10.0);
    liste = ajout_tete(liste, 2, 3, 8.5);
    liste = ajout_fin(liste, 3, 2, 15.75);

    printf("Liste de produits :\n");
    afficher_list(liste);

    printf("\nRecherche d'un produit par son codeP :\n");
    recherche(liste, 2);
    recherche(liste, 4);

    printf("\nSuppression d'un produit en tête de la liste :\n");
    liste = supp_tete(liste);
    afficher_list(liste);

    printf("\nSuppression d'un produit en fin de la liste :\n");
    liste = supp_fin(liste);
    afficher_list(liste);

    while (liste != NULL) {
        liste = supp_tete(liste);
    }

    return 0;
}
