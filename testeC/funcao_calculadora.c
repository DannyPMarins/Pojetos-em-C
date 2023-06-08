#include <stdio.h>

    float soma()
    {
        float n1, n2, total;
        printf("Digite um numero para a adicao: \n");
        scanf("%f", &n1);
        printf("Digite outro numero: \n");
        scanf("%f", &n2);
        total = n1 + n2;
        printf("O valor da adicao eh: %f \n", &total);
    };

    float subtracao()
    {
        float n1, n2, total;
        printf("Digite um numero para a subtracao: \n");
        scanf("%f", &n1);
        printf("Digite outro numero: \n");
        scanf("%f", &n2);
        total = n1 - n2;
        printf("O valor da adicao eh: %f", &total);
    };

    float multiplicacao()
    {
        float n1, n2, total;
        printf("Digite um numero para a multiplicacao: \n");
        scanf("%f", &n1);
        printf("Digite outro numero: \n");
        scanf("%f", &n2);
        total = n1 * n2;
        printf("O valor da adicao eh: %f", &total);
    };

    float divisao()
    {
        float n1, n2, total;
        printf("Digite um numero para a divisao: \n");
        scanf("%f", &n1);
        printf("Digite outro numero: \n");
        scanf("%f", &n2);
        total = n1 / n2;
        printf("O valor da adicao eh: %f", &total);
    };

int main() {

    char ope;

    printf("Digite uma operacao ( + - * / ): \n");
    scanf("%c", &ope);

    switch (ope)
    {
    case '+':
    soma();
        break;
    
    case '-':
    subtracao();
        break;
    
        case '*':
    multiplicacao();
        break;
    
        case '/':
    divisao();
        break;
    
    default:
    printf("ERRO!... voce nao digitou nenhuma operacao.");
        break;
    }
};