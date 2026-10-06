#include <stdio.h>

int main(void) {
    float valor, total = 0;

    for (int i = 1; i <= 5; i++) {
        printf("Valor da venda %d: R$ ", i);
        scanf("%f", &valor);
        total += valor;
    }

    printf("\nTotal vendido: R$ %.2f\n", total);
    printf("Media das vendas: R$ %.2f\n", total / 5);
    
	return 0;
}
