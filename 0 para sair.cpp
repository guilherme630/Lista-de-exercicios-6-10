#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um numero (0 para sair): ");
    scanf("%d", &numero);

    while (numero != 0) {
        printf("Voce digitou: %d\n", numero);
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &numero);
    }

    printf("Programa encerrado.\n");
    
    return 0;
}
