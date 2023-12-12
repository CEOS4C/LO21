#include <stdio.h>

#define L 2
#define N 3

void affiche_vecteur(int nb_elements, float v[nb_elements]);

int main(){
    float A[L][N] = {{1.0 , 2.5 , 3.0} , {2.0 , 3.0 , 2.5}};
    float B[N] = {0.5 , 1.0 , 0.0};
    float C[L] = {0.0};
    
    for (int i = 0; i < L; i++){
        for (int j = 0; j < N; j++){
            C[i] += A[i][j] * B[j];
            }
        }
    
    printf("Le produit de la matrice et du vecteur est : \n");
    affiche_vecteur(L, C);
    
    return 0;
}

void affiche_vecteur(int nb_elements, float v[nb_elements]){
    for (int i = 0; i < nb_elements; i++){
        printf("v[%d] = %f\n", i , v[i]);
    }
}
