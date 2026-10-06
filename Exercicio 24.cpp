#include <stdio.h>

int main(void) {
    int tipo, prioridade, continuar;
    int total = 0, software = 0, hardware = 0, rede = 0, urgentes = 0;

    do {
        printf("\n--- Novo atendimento ---\n");

        do {
            printf("Tipo (1-Software, 2-Hardware, 3-Rede): ");
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

        total++;

        switch (tipo) {
            case 1: software++; break;
            case 2: hardware++; break;
            case 3: rede++; break;
        }

        if (prioridade == 1) {
            urgentes++;
        }

        do {
            printf("Registrar outro atendimento? (1-Sim, 0-Nao): ");
            scanf("%d", &continuar);
            if (continuar != 0 && continuar != 1) {
                printf("Opcao invalida!\n");
            }
        } while (continuar != 0 && continuar != 1);

    } while (continuar == 1);

    printf("\n===== RESUMO =====\n");
    printf("Total de atendimentos: %d\n", total);
    printf("Software: %d\n", software);
    printf("Hardware: %d\n", hardware);
    printf("Rede: %d\n", rede);
    printf("Chamados urgentes: %d\n", urgentes);
    return 0;
}
