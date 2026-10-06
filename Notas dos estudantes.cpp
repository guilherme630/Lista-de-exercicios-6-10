#include <stdio.h>

int main(void) {
    int qtd;
    float nota;

    printf("Quantidade de estudantes: ");
    scanf("%d", &qtd);

    for (int i = 1; i <= qtd; i++) {
        printf("Nota do estudante %d: ", i);
        scanf("%f", &nota);

        printf("Nota registrada: %.1f\n", nota);
        if (nota >= 7) {
            printf("Nota maior ou igual a 7\n");
        } else {
            printf("Nota menor que 7\n");
        }
    }
    
    return 0;
}
