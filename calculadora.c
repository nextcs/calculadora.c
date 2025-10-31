#include <stdio.h>

int main() {
    double num1, num2, resultado;
    char operacao;

    printf("calculadora simples\n");

    printf("digite o primeiro numero: \n");
    scanf("%lf", &num1);

    printf("digite a operacao (+, -, *, /): \n");
    scanf(" %c", &operacao); 

    printf("digite o segundo numero: \n");
    scanf("%lf", &num2);

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Erro: divisão por zero!\n");
                return 1;
            }
            break;
        default:
            printf("Operação inválida!\n");
            return 1;
    }

    printf("Resultado: %.2lf\n", resultado);

    return 0;
}