#include <stdio.h>

int main(void) {
    printf("Forma 1 - incremento de 2 em 2:\n");
    for (int i = 2; i <= 50; i += 2) {
        printf("%d\n", i);
    }

    printf("\nForma 2 - usando %% e if:\n");
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}
