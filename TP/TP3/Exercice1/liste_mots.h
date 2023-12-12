#ifndef LISTE_MOTS_H
#define LISTE_MOTS_H

typedef struct elem {
    char* word;
    struct elem* next;
    struct elem* prev;
} DListElement;

typedef DListElement* Dl_List;

Dl_List insertion_tete(Dl_List l, char* w);
Dl_List insertion_queue(Dl_List l, char* w);
Dl_List supprimer_tete(Dl_List l);
Dl_List supprimer_queue(Dl_List l);
Dl_List reverse_list(Dl_List l);
Dl_List deleteNodeAtGivenPos(Dl_List l, int n);
void affiche_liste(Dl_List l);

#endif /* LISTE_MOTS_H */

