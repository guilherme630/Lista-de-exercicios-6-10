#include <stdio.h>

int main(void) {
    int opcao, codigo, tipo, prioridade;
    int total = 0, software = 0, hardware = 0, rede = 0, urgentes = 0;

    do {
        printf("\n========================\n");
        printf("    SISTEMA DE SUPORTE\n");
        printf("========================\n\n");
        printf("1 - Registrar chamado\n");
        printf("2 - Relatorio\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Codigo: ");
                scanf("%d", &codigo);

                do {
                    printf("Tipo (1-Software, 2-Hardware, 3-Rede): ");
                    scanf("%d", &tipo);
                    if (tipo < 1 || tipo > 3) printf("Tipo invalido!\n");
                } while (tipo < 1 || tipo > 3);

                do {
                    printf("Prioridade (1-Urgente, 2-Prioritario, 3-Normal): ");
                    scanf("%d", &prioridade);
                    if (prioridade < 1 || prioridade > 3) printf("Prioridade invalida!\n");
                } while (prioridade < 1 || prioridade > 3);

                total++;
                if (tipo == 1) software++;
                else if (tipo == 2) hardware++;
                else rede++;
                if (prioridade == 1) urgentes++;

                printf("Chamado %d registrado com sucesso.\n", codigo);
                break;

            case 2:
                printf("\n===== RELATORIO =====\n");
                printf("Total de chamados registrados: %d\n", total);
                printf("Chamados de Software: %d\n", software);
                printf("Chamados de Hardware: %d\n", hardware);
                printf("Chamados de Rede: %d\n", rede);
                printf("Chamados Urgentes: %d\n", urgentes);
                break;

            case 0:
                printf("Encerrando o sistema.\n");
                break;

            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 0);

    return 0;
}
