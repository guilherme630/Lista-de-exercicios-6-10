//1- A variável 'contador' nunca é alterada dentro do laço, então contador <= 10 fica sempre verdadeira.
//2- Um laço infinito: o programa imprimirá 1 sem parar.
//3- correção 
int contador = 1;

while (contador <= 10) {
    printf("%d\n", contador);
    contador++;
}

