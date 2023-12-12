#include <stdio.h>

void calculerUVW(int n, int u, int v, int w) {
    if (n == 0) {
        printf("u%d = %d, v%d = %d, w%d = %d\n", n, u, n, v, n, w);
    } else {
        int uN = 2 * u + 3 * v + w;
        int vN = u + v + 2 * w;
        int wN = u + 4 * v + w;

        printf("u%d = %d, v%d = %d, w%d = %d\n", n, u, n, v, n, w);

        calculerUVW(n - 1, uN, vN, wN);
    }
}

int main() {
    int u0 = 1;
    int v0 = 2;
    int w0 = 3;
    int n;

    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    calculerUVW(n, u0, v0, w0);

    return 0;
}
