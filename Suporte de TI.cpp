#include <stdio.h>

int main(void) {
    int opcao;

    do {
        printf("\n==============\n");
        printf("  SUPORTE DE TI\n");
        printf("=================\n\n");
        printf("1 - Software\n");
        printf("2 - Hardware\n");
        printf("3 - Rede\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao) {
            case 1: printf("Suporte de Software selecionado.\n"); break;
            case 2: printf("Suporte de Hardware selecionado.\n"); break;
            case 3: printf("Suporte de Rede selecionado.\n"); break;
            case 0: printf("Encerrando o suporte.\n"); break;
            default: printf("Opcao invalida.\n");
        }
    } while (opcao != 0);

    return 0;
}
