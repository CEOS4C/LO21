#include <stdio.h>
#include "arbre.h"

int main()
{
    Arbre *arbre =
            join_arbre(
                    join_arbre(
                            cree_arbre(0),
                            NULL,
                            3),
                    join_arbre(
                            join_arbre(
                                    cree_arbre(2),
                                    cree_arbre(1),
                                    4),
                            NULL,
                            5),
                    0);

    printf("Affichage en ordre préfixe: ");
    affiche_arbre_prefixe(arbre);
    printf("\n");

    printf("Affichage en ordre postfixe: ");
    affiche_arbre_postfixe(arbre);
    printf("\n");

    printf("Nombre de noeuds dans l'arbre: %d\n", nombre_de_noeuds(arbre));

    vider_arbre(arbre);

    return 0;
}
