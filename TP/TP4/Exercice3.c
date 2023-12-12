#include <stdio.h>
#include <string.h>

void afficherEnvers(char phrase[], int index) {
    char c = phrase[index];
    if (c != '\n') {
        afficherEnvers(phrase, index + 1);
        putchar(c);
    }
}

int main() {
    char phrase[1000];

    printf("Ce programme permet de vérifier si le dernier caractère d'une phrase écrite par l'utilisateur est un point (.).\n"
           "Par exemple, si vous tapez : TP5 LO21. \n"
           "Le programme retournera si le dernier caractère est un point ou non.\n"
           "La phrase doit se terminer par un point (et ne contenant pas d’autre point que celui-ci). \n\n\n");

    int pointCount;
    do {
        printf("Veuillez taper une phrase en suivant les consignes données ci-dessus : ");
        scanf(" %[^\n]", phrase);

        pointCount = 0;
        for (int i = 0; i < strlen(phrase); i++) {
            if (phrase[i] == '.') {
                pointCount++;
            }
        }

        if (pointCount != 1) {
            printf("La phrase doit contenir un seul point en tant que dernier caractère.\n\n");
        }

    } while (!(strlen(phrase) > 0 && phrase[strlen(phrase) - 1] == '.' && pointCount == 1));

    printf("\nLe mot à l'endroit : \n");
    for (int j = 0; j < strlen(phrase); j++) {
        printf("%c", phrase[j]);
    }

    printf("\nLe mot à l'envers : \n");
    afficherEnvers(phrase, 0);

    putchar('.');

    return 0;
}
