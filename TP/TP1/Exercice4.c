#include <stdio.h>

float integraleInverse(float borneInf, float borneSup, int nbIntervalles);

int main(){
    float a, b;
    int n;
    
    printf("Entrez la borne inferieure de l'intervalle : ");
    scanf("%f", &a);
    
    printf("Entrez la borne superieure de l'intervalle : ");
    scanf("%f", &b);
    
    printf("Entrez le nombre de sous-intervalles : ");
    scanf("%d", &n);
    
    if(n <= 0){
        printf("Le nombre de sous-intervalles doit etre superieur a 0\n");
        return 1;
    }
    
    float resultat = integraleInverse(a, b, n);
    
    printf("L'approximation de l'integrale de 1/x sur [%f ; %f] avec %d sous-intervalles est : %.6f\n", a, b, n, resultat);
    
    return 0;
}

float integraleInverse(float borneInf, float borneSup, int nbIntervalles){
    float h = (borneSup - borneInf) / nbIntervalles;
    float somme = 0.0;
    
    for(int i = 1; i < nbIntervalles; i++){
        float x = borneInf + i * h;
        somme += 1.0 / x;
    }
    
    return h * (0.5 * (1.0 / borneInf + 1.0 / borneSup) + somme);
}
