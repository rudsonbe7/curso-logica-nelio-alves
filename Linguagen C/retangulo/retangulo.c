#include<stdio.h>
#include<math.h>

    int main() {

    double base, altura, area, perimetro, diagonal, cuadrado;

    printf("Base do retangulo: ");
    scanf("%lf", &base);
    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    area = altura * base;
    perimetro = (altura * 2) + (base * 2);
    cuadrado = (base * base) + (altura * altura);
    diagonal = sqrt(cuadrado);

    printf("AREA = %.4lf\n", area);
    printf("PERIMETRO = %.4lf\n", perimetro);
    printf("DIAGONAL = %.4lf\n", diagonal);

    return 0;
    }
