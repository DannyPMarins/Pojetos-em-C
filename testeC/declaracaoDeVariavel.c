#include <stdio.h>
#define icms 0.18; //declaração da constante
main()
{
float preco_produto, valor_icms; 
preco_produto = 50;
valor_icms = preco_produto * icms;
printf("Valor de imposto a ser pago: R$ %f", valor_icms);
}