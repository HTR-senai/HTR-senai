#include <stdio.h>

int main() {
    int numero;

    printf("Digite sua idade: ");
    scanf("%d", &numero);

    if(numero < 12) {
        printf("Criança");
    } else if(numero == 12 || numero == 13 || numero == 14 || numero == 15 || numero == 16 || numero == 17) {
        printf("Adolescente");
    } else {
        printf("Adulto");
    }

    return 0;
}