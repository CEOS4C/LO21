#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "liste_mots.h"

Dl_List insertion_tete(Dl_List l, char* w) {
    DListElement* new_element = (DListElement*)malloc(sizeof(DListElement));
    if (new_element == NULL) {
        exit(1);
    }

    new_element->word = (char*)malloc(strlen(w) + 1);
    if (new_element->word == NULL) {
        free(new_element);
        exit(1);
    }

    strcpy(new_element->word, w);
    new_element->next = l;
    new_element->prev = NULL;

    if (l != NULL) {
        l->prev = new_element;
    }

    return new_element;
}

Dl_List insertion_queue(Dl_List l, char* w) {
    DListElement* new_element = (DListElement*)malloc(sizeof(DListElement));
    if (new_element == NULL) {
        exit(1);
    }

    new_element->word = (char*)malloc(strlen(w) + 1);
    if (new_element->word == NULL) {
        free(new_element);
        exit(1);
    }

    strcpy(new_element->word, w);
    new_element->next = NULL;

    DListElement* current = l;
    if (l == NULL) {
        new_element->prev = NULL;
        return new_element;
    }

    while (current->next != NULL) {
        current = current->next;
    }

    current->next = new_element;
    new_element->prev = current;

    return l;
}

Dl_List supprimer_tete(Dl_List l) {
    if (l == NULL) {
        return NULL;
    }

    DListElement* next_element = l->next;
    free(l->word);
    free(l);

    if (next_element != NULL) {
        next_element->prev = NULL;
    }

    return next_element;
}

Dl_List supprimer_queue(Dl_List l) {
    if (l == NULL) {
        return NULL;
    }

    if (l->prev == NULL) {
        free(l->word);
        free(l);
        return NULL;
    }

    DListElement* prev_element = l->prev;
    prev_element->next = NULL;
    free(l->word);
    free(l);

    return prev_element;
}

Dl_List reverse_list(Dl_List l) {
    Dl_List current = l;
    Dl_List new_head = NULL;

    while (current != NULL) {
        Dl_List temp = current->next;
        current->next = current->prev;
        current->prev = temp;
        new_head = current;
        current = temp;
    }

    return new_head;
}

Dl_List deleteNodeAtGivenPos(Dl_List l, int n) {
    if (l == NULL || n < 0) {
        return l;
    }

    if (n == 0) {
        return supprimer_tete(l);
    }

    Dl_List current = l;
    int count = 0;

    while (current != NULL && count < n) {
        current = current->next;
        count++;
    }

    if (current == NULL) {
        return l;
    }

    if (current->next != NULL) {
        current->next->prev = current->prev;
    }

    if (current->prev != NULL) {
        current->prev->next = current->next;
    }

    free(current->word);
    free(current);

    return l;
}

void affiche_liste(Dl_List l) {
    Dl_List current = l;
    while (current != NULL) {
        printf("%s -> ", current->word);
        current = current->next;
    }
    printf("NULL\n");
}
