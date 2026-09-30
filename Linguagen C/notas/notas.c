#include<stdio.h>

    int main() {

    double nota1, nota2, notaFinal;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    notaFinal = nota1 + nota2;

    if (notaFinal >= 60.0) {
        printf("NOTA FINAL = %.1lf", notaFinal);
    }
    else{
    printf("NOTA FINAL = %.1lf\nREPROVADO", notaFinal);}


    return 0;
    }
