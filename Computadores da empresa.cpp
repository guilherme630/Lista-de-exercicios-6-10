#include <stdio.h>

int main(void) {
    int status; 
	int funcionando = 0;
	int defeito = 0;

    for (int i = 1; i <= 10; i++) {
        do {
            printf("Computador %d (1 - Funcionando, 0 - Com defeito): ", i);
            scanf("%d", &status);
            if (status != 0 && status != 1) {
                printf("Valor invalido! Digite 0 ou 1.\n");
            }
        } while (status != 0 && status != 1);

        if (status == 1) {
            funcionando++;
        } else {
            defeito++;
        }
    }

    printf("\nComputadores funcionando: %d\n", funcionando);
    printf("Computadores com defeito: %d\n", defeito);
    
	return 0;
}
