#include<stdio.h>
#include<string.h>

    int main() {

    char nome1[50], nome2[50];
    int idade1, idade2;
    float media;

    printf("Dados da primeira pessoa: ");
    printf("\nNome: ");
    scanf("%s", nome1);
    printf("Idade: ");
    scanf("%d", &idade1);
    printf("Dados segunda pessoa: ");
    printf("\nNome: ");
    scanf("%s", nome2);
    printf("Idade: ");
    scanf("%d", &idade2);

    media = (idade1 + idade2) / 2.0;

    printf("A idade media de %s e %s eh de %.1lf anos", nome1, nome2, media);

    return 0;
    }
