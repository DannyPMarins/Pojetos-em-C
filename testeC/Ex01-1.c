#include <stdio.h>
int main()
{
float raio,
pi = 3.14,
diametro,
comprimento,
area;
printf("Digite o raio: ");
scanf("%f", &raio);
diametro = 2 * raio;
comprimento = 2 * pi * raio;
area = pi * raio * raio;
printf("Diametro %.2f\n", diametro);
printf("Comprimento %.2f\n", comprimento);
printf("Area %.2f\n", area);
}