#include <stdio.h>

int main(void) {
    int qtd, codigo;
    float preco;

    printf("Quantidade de produtos: ");
    scanf("%d", &qtd);

    for (int i = 1; i <= qtd; i++) {
        printf("\nProduto %d\n", i);
        printf("Codigo: ");
        scanf("%d", &codigo);
        printf("Preco: ");
        scanf("%f", &preco);

        printf("Produto cadastrado -> Codigo: %d | Preco: R$ %.2f\n", codigo, preco);
    }
    return 0;
}
