#include <stdio.h>
#include <string.h>

    int main() {

    int i, N;

    double soma, media, porc;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    char nome[N][50];
    int idade[N];
    double altura[N];
    int contMenor = 0;
    soma = 0.0;

    for (i = 0; i < N; i++) {
        printf("Dados da %da pessoa:\n", i+1);
        printf("Nome: ");
        scanf("%s", &nome[i]);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Altura: ");
        scanf("%lf", &altura[i]);
        soma = soma + altura[i];
    }

    for (i = 0; i < N; i++) {
        if (idade[i] < 16) {
            contMenor++;
        }
    }

    media = soma / N;
    porc = ((double)contMenor / N) * 100.0;

    printf("\nAltura media: %.2lf\n", media );
    printf("Pessoas com menos de 16 anos: %.1lf%%\n", porc);

    for (i = 0; i < N; i++) {
        if (idade[i] < 16) {
            printf("%s\n", nome[i]);
        }
    }

    return 0;
    }
