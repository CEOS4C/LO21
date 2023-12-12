//
// Created by ceos4c on 13/11/23.
//

#include <stdio.h>
#include <stdlib.h>
#include "arbre.h"

Arbre *cree_arbre(int x) {
    Arbre *nouveau_arbre = (Arbre *)malloc(sizeof(Arbre));
    if (nouveau_arbre == NULL)
    {
        fprintf(stderr, "Erreur lors de l'allocation de mémoire pour l'arbre.\n");
        exit(EXIT_FAILURE);
    }

    nouveau_arbre->value = x;
    nouveau_arbre->Agauche = NULL;
    nouveau_arbre->Adroit = NULL;
    nouveau_arbre->parent = NULL;

    return nouveau_arbre;
}

Arbre *join_arbre(Arbre *gauche, Arbre *droit, int noeud) {
    Arbre *nouveau_arbre = cree_arbre(noeud);
    nouveau_arbre->Agauche = gauche;
    nouveau_arbre->Adroit = droit;

    if (gauche != NULL)
        gauche->parent = nouveau_arbre;

    if (droit != NULL)
        droit->parent = nouveau_arbre;

    return nouveau_arbre;
}

void affiche_arbre_prefixe(Arbre *ar) {
    if (ar != NULL)
    {
        printf("%d ", ar->value);
        affiche_arbre_prefixe(ar->Agauche);
        affiche_arbre_prefixe(ar->Adroit);
    }
}

void affiche_arbre_postfixe(Arbre *ar) {
    if (ar != NULL)
    {
        affiche_arbre_postfixe(ar->Agauche);
        affiche_arbre_postfixe(ar->Adroit);
        printf("%d ", ar->value);
    }
}

int nombre_de_noeuds(Arbre *ar) {
    if (ar == NULL)
        return 0;

    return 1 + nombre_de_noeuds(ar->Agauche) + nombre_de_noeuds(ar->Adroit);
}

void vider_arbre(Arbre *ar) {
    if (ar != NULL)
    {
        vider_arbre(ar->Agauche);
        vider_arbre(ar->Adroit);
        free(ar);
    }
}