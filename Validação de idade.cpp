#include <stdio.h>

int main(void) {
    int idade;

    do {
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (idade < 0) {
            printf("Idade invalida!\n");
        }
    } while (idade < 0);

    printf("Idade registrada: %d\n", idade);
    
    return 0;
}
