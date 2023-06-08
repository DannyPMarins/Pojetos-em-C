#include <stdio.h>

int main () {
    char ope;
    double n1, n2, resultado;

    printf("Digite uma operação ( + - * / ): \n");
    scanf("%c", &ope);

    printf("Digite um numero: ");
    scanf("%lf", &n1);

    printf("Digite o segundo numero: ");
    scanf("%lf", &n2);

    switch (ope)
    {
    case '+':
        resultado = n1 + n2;
        printf("O resultado da adicao eh: %lf", resultado);
        break;

        case '-':
        resultado = n1 - n2;
        printf("O resultado da subitracao eh: %lf", resultado);
        break;

        case '*':
        resultado = n1 * n2;
        printf("O resultado da multiplicacao eh: %lf", resultado);
        break;

        case '/':
        resultado = n1 / n2;
        printf("O resultado da divisao eh: %lf", resultado);
        break;
    
    default:
        printf("%c Não eh valido", ope);
        break;
    }

}