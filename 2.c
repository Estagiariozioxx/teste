#include <stdio.h>

int Fibonacci(int num) {
    int a = 0, b = 1, prox = a + b;
    
    if (num == 0 || num == 1) {
        return 1;
    }

    while (prox <= num) {
        if (prox == num) {
            return 1; 
        }
        a = b;
        b = prox;
        prox = a + b;
    }

    return 0; 
}

int main() {
    int num;
    printf("Informe um número para verificar se pertence à sequência de Fibonacci: ");
    scanf("%d", &num);

    if (isFibonacci(num)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", num);
    }

    return 0;
}
