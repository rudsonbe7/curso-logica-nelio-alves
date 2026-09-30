#include <stdio.h>

    int main() {

    int N, i, j, negativo = 0;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &N);

    int mat[N][N];

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (mat[i][j] < 0) {
                negativo++;
            }
        }
    }

    printf("\nDIAGONAL PRINCIPAL:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", mat[i][i]);
    }

    printf("\n");
    printf("QUANTIDADE DE NEGATIVOS = %d", negativo);

    return 0;
    }
