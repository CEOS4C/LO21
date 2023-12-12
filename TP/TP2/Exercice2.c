#include <stdio.h>
#include <math.h>

void solutionEquation(float *a, float *b, float *c){
    int n;
    float delta, x1, x2;
    delta = pow(*b, 2) - (4 * *a * *c);
    printf("\nLe discriminant vaut : %.2f", delta);
    if (delta < 0){
        n = 0;
        printf("\nLe discriminant est negatif, l'equation comporte %d aucune solution reelle", n);
    }
    else if (delta == 0){
        n = 1;
        printf("\nLe discriminant est egal a 0, l'equation comporte %d solution reelle", n);
        x1 = -*b / *a;
        printf("\nLa solution x1 est : %.2f", x1);
    }
    else{
        n = 2;
        printf("\nLe discriminant est positif, l'equation comporte %d solutions reelles", n);
        x1 = (-*b - sqrt(delta)) / (2 * *a);
        x2 = (-*b + sqrt(delta)) / (2 * *a);
        printf("\nLes solutions x1 et x2 sont : %.2f / %.2f", x1, x2);
    }
}

int main(){
    float x, y, z;
    printf("Ce programme calcule la ou les solutions d'une equation du 2nd degre, sous la forme x^2 + yx + zc = 0\n");
    printf("\nIndiquez la valeur de x : ");
    scanf("%f", &x);
    printf("Indiquez la valeur de y : ");
    scanf("%f", &y);
    printf("Indiquez la valeur de z : ");
    scanf("%f", &z);
    
    solutionEquation(&x, &y, &z);
    
    return 0;
}
