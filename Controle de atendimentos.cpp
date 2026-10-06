#include <stdio.h>

int main(void) {
    int tipo;
	int software = 0;
	int hardware = 0;
	int rede = 0;

    for (int i = 1; i <= 10; i++) {
        do {
            printf("Atendimento %d (1-Software, 2-Hardware, 3-Rede): ", i);
            scanf("%d", &tipo);
            if (tipo < 1 || tipo > 3) {
                printf("Opcao invalida!\n");
            }
        } while (tipo < 1 || tipo > 3);

        switch (tipo) {
            case 1: software++; break;
            case 2: hardware++; break;
            case 3: rede++; break;
        }
    }

    printf("\nSoftware: %d\n", software);
    printf("Hardware: %d\n", hardware);
    printf("Rede: %d\n", rede);
    printf("Total de atendimentos: %d\n", software + hardware + rede);
    
    return 0;
}
