#include <stdio.h>

int main(void) {
    int qtd, codigo, tipo, prioridade;

    printf("Quantos chamados deseja cadastrar? ");
    scanf("%d", &qtd);

    for (int i = 1; i <= qtd; i++) {
        printf("\n--- Chamado %d ---\n", i);
        printf("Codigo do chamado: ");
        scanf("%d", &codigo);

        do {
            printf("Tipo - (1-Software, 2-Hardware, 3-Rede): ");
            scanf("%d", &tipo);
            if (tipo < 1 || tipo > 3) {
                printf("Tipo invalido!\n");
            }
        } while (tipo < 1 || tipo > 3);

        do {
            printf("Prioridade (1-Urgente, 2-Prioritario, 3-Normal): ");
            scanf("%d", &prioridade);
            if (prioridade < 1 || prioridade > 3) {
                printf("Prioridade invalida!\n");
            }
        } while (prioridade < 1 || prioridade > 3);

        printf("\n========================\n");
        printf("CHAMADO CADASTRADO\n");
        printf("========================\n\n");
        printf("Codigo: %d\n", codigo);

        printf("Tipo: ");
        switch (tipo) {
            case 1: printf("Software\n"); 
            case 2: printf("Hardware\n"); 
            case 3: printf("Rede\n"); 
        }

        printf("Prioridade: ");
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
