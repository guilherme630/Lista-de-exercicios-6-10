//1- Vai fazer uma contagem regressiva de 10 até 1.
//2- Não. numero++ incrementa, mas a contagem regressiva precisa de decremento (numero--).
//3- Sim. numero só aumenta, então numero > 0 nunca fica falso.

int numero = 10;

while (numero > 0) {
    printf("%d\n", numero);
    numero--;
}

