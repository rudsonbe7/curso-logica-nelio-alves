#include <stdio.h>

int main () {

    int hora;

    printf("Qual o horario? ");
    scanf("%d", &hora);

    if (hora < 12) {
    printf("Bom dia!");
    }
        else {
        printf("Boa tarde!");
        }
    return 0;
}
