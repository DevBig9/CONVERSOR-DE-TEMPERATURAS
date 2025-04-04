#include <stdio.h>

int main() {
    float temperatura, resultado;
    char unidade_inicial, unidade_destino;


    printf("Digite a temperatura e a unidade inicial (C, F ou K): ");
    if (scanf("%f %c", &temperatura, &unidade_inicial) != 2) {
        printf("Erro na leitura da temperatura e unidade inicial!\n");
        return 1;
    }

    
    printf("Digite a unidade para a qual deseja a conversão (C, F ou K): ");
    if (scanf(" %c", &unidade_destino) != 1) {
        printf("Erro na leitura da unidade de destino!\n");
        return 1;
    }

    if (unidade_inicial == 'C' || unidade_inicial == 'c') {
        if (unidade_destino == 'F' || unidade_destino == 'f') {
            resultado = (temperatura * 1.8) + 32;
            printf("%.2f C = %.2f F\n", temperatura, resultado);
        } else if (unidade_destino == 'K' || unidade_destino == 'k') {
            resultado = temperatura + 273.15;
            printf("%.2f C = %.2f K\n", temperatura, resultado);
        } else {
            printf("Unidade de destino inválida!\n");
        }
    } else if (unidade_inicial == 'F' || unidade_inicial == 'f') {
        if (unidade_destino == 'C' || unidade_destino == 'c') {
            resultado = (temperatura - 32) * 5.0 / 9.0;
            printf("%.2f F = %.2f C\n", temperatura, resultado);
        } else if (unidade_destino == 'K' || unidade_destino == 'k') {
            resultado = (temperatura - 32) * 5.0 / 9.0 + 273.15;
            printf("%.2f F = %.2f K\n", temperatura, resultado);
        } else {
            printf("Unidade de destino inválida!\n");
        }
    } else if (unidade_inicial == 'K' || unidade_inicial == 'k') {
        if (unidade_destino == 'C' || unidade_destino == 'c') {
            resultado = temperatura - 273.15;
            printf("%.2f K = %.2f C\n", temperatura, resultado);
        } else if (unidade_destino == 'F' || unidade_destino == 'f') {
            resultado = (temperatura - 273.15) * 1.8 + 32;
            printf("%.2f K = %.2f F\n", temperatura, resultado);
        } else {
            printf("Unidade de destino inválida!\n");
        }
    } else {
        printf("Unidade inicial inválida!\n");
    }

    return 0;
}
