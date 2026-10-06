#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while (numero < 0) {
        printf("Valor invalido.\n");
        printf("Digite novamente: ");
        scanf("%d", &numero);
    }

    printf("Numero aceito: %d\n", numero);
    return 0;
}
