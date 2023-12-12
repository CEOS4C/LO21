#include <stdio.h>
#include <stdlib.h>
#include "liste_mots.h"

int main() {
    int n;
    char* mot1 = "worry";
    char* mot2 = "don't";
    char* mot3 = "be";
    char* mot4 = "happy";
    Dl_List p = NULL;

    p = insertion_tete(p, mot1);
    p = insertion_tete(p, mot2);
    p = insertion_queue(p, mot3);
    p = insertion_queue(p, mot4);

    printf("Liste initiale:\n");
    affiche_liste(p);

    p = reverse_list(p);
    printf("\nListe inversée:\n");
    affiche_liste(p);

    printf("\nSélectionnez la position du mot (élément) à supprimer : ");
    scanf("%d", &n);
    p = deleteNodeAtGivenPos(p, n);
    printf("\nListe après suppression de l'élément à la position %d:\n", n);
    affiche_liste(p);

    p = supprimer_tete(p);
    p = supprimer_queue(p);
    printf("\nListe après suppression de la tête et de la queue :\n");
    affiche_liste(p);

    return 0;
}

