#include <stdio.h>

void permutationCirculaire(int *a, int *b, int *c){
    int temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}

int main(){
    int x, y, z;
    printf("Veuillez entrez un 1er nombre entier : ");
    scanf("%d", &x);
    printf("Veuillez entrez un 2eme nombre entier : ");
    scanf("%d", &y);
    printf("Veuillez entrez un 3eme nombre entier : ");
    scanf("%d", &z);
    
    printf("Avant permutation : x = %d, y = %d, z = %d\n", x, y, z);
    
    permutationCirculaire(&x, &y, &z);
    
    printf("Apres permutation : x = %d, y = %d, z = %d\n", x, y, z);
    
    return 0;
}
