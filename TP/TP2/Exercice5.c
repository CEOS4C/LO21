#include <stdio.h>
#include <string.h>

struct Produit {
    char nom[50];
    int code;
    int quantite;
    float prix;
};

int main() {
    int n;
    struct Produit produits[4];
    
    strcpy(produits[0].nom, "Pomme");
    produits[0].code = 3;
    produits[0].quantite = 0;
    produits[0].prix = 5.8;

    strcpy(produits[1].nom, "Poulet");
    produits[1].code = 5;
    produits[1].quantite = 1;
    produits[1].prix = 12.4;

    strcpy(produits[2].nom, "Pain");
    produits[2].code = 7;
    produits[2].quantite = 2;
    produits[2].prix = 13.5;

    strcpy(produits[3].nom, "Riz");
    produits[3].code = 6;
    produits[3].quantite = 10;
    produits[3].prix = 10;

    printf("Ce programme vous permet d'afficher les produits dont la quantité est inférieure à un seuil donné.\n");
    printf("Quel seuil choisissez-vous ? : ");
    scanf("%d", &n);
    printf("Nom\tCode\tQuantite\tPrix\n");
    for (int i = 0; i < 4; i++) {
        if (produits[i].quantite < n) {
            printf("%s\t%d\t%d\t\t%.2f\n", produits[i].nom, produits[i].code, produits[i].quantite, produits[i].prix);
        }
    }

    return 0;
}
