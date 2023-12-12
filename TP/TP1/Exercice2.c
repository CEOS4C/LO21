#include <stdio.h>

#define S 4

typedef struct{
    int code;
    int quantite;
    float prix;
    } produit; 

void affiche_produit(produit p);

int main(){

    produit tProduits[S];
    tProduits[0].code = 3;
    tProduits[0].quantite = 0;
    tProduits[0].prix = 5.8;
    tProduits[1].code = 5;
    tProduits[1].quantite = 1;
    tProduits[1].prix = 12.4;
    tProduits[2].code = 7;
    tProduits[2].quantite = 2;
    tProduits[2].prix = 13.5;
    tProduits[3].code = 6;
    tProduits[3].quantite = 10;
    tProduits[3].prix = 10;
    
    affiche_produit(tProduits[0]);
    
    int seuil;
    printf("Entrez un prix max\n");
    scanf("%d", &seuil);

    for(int i = 0; i < 4; i++){
        if(tProduits[i].prix < seuil){
            affiche_produit(tProduits[i]);
        }
    }
    
    return 0;
}

void affiche_produit(produit p){
    printf("Code : %d\n", p.code);
    printf("Quantite : %d\n", p.quantite);
    printf("Prix : %.f\n", p.prix);
}
    
