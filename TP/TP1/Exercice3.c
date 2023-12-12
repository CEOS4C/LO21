#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct monome {
    float coef;
    int degree;
} Monome;

int main(){
    int nbMonome;
    float x;
    float resultat = 0.0;
    
    printf("Nombre de monome ? : ");
    scanf("%d", &nbMonome);
    
    if(nbMonome <= 0){
        printf("Le nombre de monome doit être supérieur à 0. \n");
        return EXIT_FAILURE;
    }
    
    Monome polynome[nbMonome];
    
    for(int i = 0; i < nbMonome; i++){
        printf("\nCoefficient du monome %d : ", i + 1);
        scanf("%f", &polynome[i].coef);
        printf("Degre du monome %d : ", i + 1);
        scanf("%d", &polynome[i].degree);
    }
    
    printf("Valeur de x : ");
    scanf("%f", &x);
    
    for(int i = 0; i < nbMonome; i++){
        resultat += polynome[i].coef * pow(x, polynome[i].degree);
    }
    
    printf("P(x) pour x = %.2f est egal a %.2f\n", x , resultat);
    
    return 0;
}
    
