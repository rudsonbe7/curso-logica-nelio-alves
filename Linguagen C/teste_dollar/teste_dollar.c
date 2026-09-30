#include <stdio.h>
#include <string.h>

void conversao_real(double real);
void conversao_real(double real)
{
    double dollar = real * 0.2;
    printf("%.2lf reais e igual a %.2lf dolares\n\n", real, dollar);
}

int main () {
    
    double real, dollar;

    printf("Quantos reais quer converter? ");
    scanf("%lf", &real);
    conversao_real(real);

    return 0;
}
