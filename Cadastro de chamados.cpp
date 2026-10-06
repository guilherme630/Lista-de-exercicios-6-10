#include <stdio.h>

int main(void) {
    int qtd, codigo, prioridade;

    printf("Quantos chamados deseja cadastrar ? ");
    scanf("%d", &qtd);

    for (int i = 1; i <= qtd; i++) {
        printf("\n--- Chamado %d ---\n", i);
        printf("Codigo do chamado: ");
        scanf("%d", &codigo);

        do {
            printf("Prioridade (1-Urgente, 2-Prioritario, 3-Normal): ");
            scanf("%d", &prioridade);
            if (prioridade < 1 || prioridade > 3) {
                printf("Prioridade invalida!\n");
            }
        } while (prioridade < 1 || prioridade > 3);

        printf("Chamado %d - Classificacao: ", codigo);
        if (prioridade == 1) {
            printf("Urgente\n");
        } else if (prioridade == 2) {
            printf("Prioritario\n");
        } else {
            printf("Normal\n");
        }
    }
    return 0;
}
