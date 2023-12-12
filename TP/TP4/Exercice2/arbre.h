//
// Created by ceos4c on 13/11/23.
//

#ifndef EXO2_ARBRE_H
#define EXO2_ARBRE_H

typedef struct Arbre
{
    int value;
    struct Arbre *Agauche;
    struct Arbre *Adroit;
    struct Arbre *parent;
} Arbre;

Arbre *cree_arbre(int x);
Arbre *join_arbre(Arbre *gauche, Arbre *droit, int noeud);
void vider_arbre(Arbre *ar);
void affiche_arbre_prefixe(Arbre *ar);
void affiche_arbre_postfixe(Arbre *ar);
int nombre_de_noeuds(Arbre *ar);

#endif //EXO2_ARBRE_H
