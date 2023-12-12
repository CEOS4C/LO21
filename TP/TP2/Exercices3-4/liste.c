#include "liste.h"

List ajout_tete(List l, int c, int q, float p) {
    prod *newProduct = malloc(sizeof(prod));
    if (newProduct == NULL) {
        perror("Erreur d'allocation de mémoire");
        exit(EXIT_FAILURE);
    }

    newProduct->codeP = c;
    newProduct->quantP = q;
    newProduct->prixP = p;
    newProduct->next = l;

    return newProduct;
}

List ajout_fin(List l, int c, int q, float p) {
    prod *newProduct = malloc(sizeof(prod));
    if (newProduct == NULL) {
        perror("Erreur d'allocation de mémoire");
        exit(EXIT_FAILURE);
    }

    newProduct->codeP = c;
    newProduct->quantP = q;
    newProduct->prixP = p;
    newProduct->next = NULL;

    if (l == NULL) {
        return newProduct;
    }

    prod *current = l;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newProduct;
    return l;
}

List supp_tete(List l) {
    if (l == NULL) {
        return NULL;
    }

    prod *temp = l;
    l = l->next;
    free(temp);
    return l;
}

List supp_fin(List l) {
    if (l == NULL) {
        return NULL;
    }

    if (l->next == NULL) {
        free(l);
        return NULL;
    }

    prod *current = l;
    while (current->next->next != NULL) {
        current = current->next;
    }

    free(current->next);
    current->next = NULL;
    return l;
}

void recherche(List l, int c) {
    prod *current = l;
    while (current != NULL) {
        if (current->codeP == c) {
            printf("Produit trouvé - CodeP: %d Quantité: %d Prix: %.2f\n", current->codeP, current->quantP, current->prixP);
            return;
        }
        current = current->next;
    }
    printf("Produit avec le codeP %d non trouvé.\n", c);
}

void afficher_list(List l) {
    prod *current = l;
    while (current != NULL) {
        printf("CodeP: %d Quantité: %d Prix: %.2f\n", current->codeP, current->quantP, current->prixP);
        current = current->next;
    }
}
