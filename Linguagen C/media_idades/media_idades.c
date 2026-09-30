#include <stdio.h>

    int main() {

    int idade, cont, total;
    double media;

    printf("Digite as idades:\n");
    scanf("%d", &idade);
    if (idade < 0) {
        printf("IMPOSSIVEL CALCULAR");
    }
        else {
    cont = 0;
    total = 0;
    while (idade >= 0) {
        cont = cont + 1;
        total = total + idade;
        scanf("%d", &idade);
    }
        media = (double)total / cont;
        printf("MEDIA = %.2lf\n", media);
        }

    return 0;
    }
