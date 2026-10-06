#include <stdio.h>

int main(void) {
    int opcao;

    do {
        printf("\n========================\n");
        printf("       MENU\n");
        printf("========================\n\n");
        printf("1 - Cadastrar\n");
        printf("2 - Consultar\n");
        printf("3 - Relatorio\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: printf("Cadastrar selecionado.\n"); break;
            case 2: printf("Consultar selecionado.\n"); break;
            case 3: printf("Relatorio selecionado.\n"); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opcao invalida.\n");
        }
    } while (opcao != 0);

    return 0;
}
