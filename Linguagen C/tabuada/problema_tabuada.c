#include<stdio.h>

    int main(){

    int N, i, tabuada;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &N);

    for (i = 1; i < 11; i++){
        tabuada = N * i;
        printf("%d x %d = %d\n", N, i, tabuada);
    }

    return 0;
    }
