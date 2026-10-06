//1-Não será executado nenhuma vez.
//2-Porque a condição contador >= 10 é testada antes da primeira repetição. Como 1 >= 10 é falso, o laço nem começa.
//3-Trocar >= por <=

for (int contador = 1; contador <= 10; contador++) {
    printf("%d\n", contador);
}
