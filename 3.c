#include <stdio.h>
#include <limits.h>

int main() {
    double faturamento[] = {0, 22174.1664, 24537.6698, 26139.6134, 0, 0, 26742.6612, 0, 0, 42889.2258, 0, 46251.174, 0, 11191.4722, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; 
    int dias = sizeof(faturamento) / sizeof(faturamento[0]);
    
    double menor = INT_MAX;
    double maior = 0;
    double soma = 0;
    int diasValidos = 0;
    
    for (int i = 0; i < dias; i++) {
        if (faturamento[i] > 0) { 
            if (faturamento[i] < menor) {
                menor = faturamento[i];
            }
            if (faturamento[i] > maior) {
                maior = faturamento[i];
            }
            soma += faturamento[i];
            diasValidos++;
        }
    }

    double media = soma / diasValidos;
    int diasAcimaMedia = 0;

    for (int i = 0; i < dias; i++) {
        if (faturamento[i] > media) {
            diasAcimaMedia++;
        }
    }

    printf("Menor faturamento: %.2f\n", menor);
    printf("Maior faturamento: %.2f\n", maior);
    printf("Dias com faturamento acima da média: %d\n", diasAcimaMedia);

    return 0;
}
