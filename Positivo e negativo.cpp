#include <stdio.h>

int main(void) {
    int numero;

    for (int i = 1; i <= 10; i++) {
        printf("Numero %d: ", i);
        scanf("%d", &numero);

        if (numero > 0) {
            printf("POSITIVO\n");
        } else if (numero < 0) {
            printf("NEGATIVO\n");
        } else {
            printf("ZERO\n");
        }
    }
    return 0;
}
