// Desenvolver um programa para consumo de lanches e/ou bebidas em uma lanchonete da zona sul do RJ. 

// Construir um programa para informar o nome da pessoa que está adquirindo o produto, a quantidade de pessoas que irão consumir o produto, o nome do produto, a quantidade a ser consumida daquele produto e exibir, na sequência, o total daquele produto (quantidade * preço). A pessoa só poderá consumir um único produto.
// Na sequência deverá haver uma pergunta sobre a forma de pagamento (à vista ou com cartão de crédito). Caso seja à vista, deverá ser dado um desconto de 7% no resultado final, se for com cartão de crédito deverá ser acrescentado ao resultado final um acréscimo de 9%.
// Ao término do programa deverá ser exibido o valor total consumido pela pessoa já com o desconto dado e/ou com o acréscimo.
// É preciso também que seja informado o valor médio para consumo (valor total / quantidade de pessoas).
// O programa deverá executar esta ação para 5 clientes ou seja, 5 vezes. Após isto o programa finaliza.


#include <stdio.h>
#include <string.h>
#include <locale.h>
       
        typedef struct {
        char nomeProduto[50];
        float precoProduto;
        } Produto;
       
        float BuscarPrecoProduto(char nomeProduto[])
        {
        Produto listaProdutos[] = {
        {"Refrigerante", 2.00 },
        { "Misto Quente", 4.00},
        { "Hamburguer", 5.00 }
        };
       
        int iNumProd = sizeof(listaProdutos) / sizeof(listaProdutos[0]);
       
        for(int i = 0; i < iNumProd; i++)
        {
        if (strcmp(nomeProduto, listaProdutos[i].nomeProduto) == 0)
        {
        return listaProdutos[i].precoProduto;
        }
        }
        return -1;
        }
       


int main()
{
setlocale(LC_ALL, "Portuguese");
for (int i = 0; i < 5; i++)
{
char nomePessoa[50];
char nomeProduto[50];
int qtdPessoas = 0;
int qtdProduto = 0;
int formaPagamento = 0;
char strFormaPagamento[50];
float total;
float valorMedio;

printf("Informe o seu Nome: ");
scanf(" %[^\n]", nomePessoa);

checa_produto:
printf("Informe o nome do Produto: ");
scanf(" %[^\n]", nomeProduto);
float precoProduto = BuscarPrecoProduto(nomeProduto);

if (precoProduto == -1)
{
printf("Produto não esta cadastrado.\n");
goto checa_produto;
}

checa_pessoas:
printf("Informe a quantia de pessoas: ");
scanf("%d", &qtdPessoas);

if (qtdPessoas <= 0)
{
printf("Quantidade de pessoas não é válida.\n");
goto checa_pessoas;
}

checa_qtdproduto:
printf("Informe a quantidade do produto: ");
scanf("%d", &qtdProduto);

if (qtdProduto <= 0)
{
printf("Quantidade não é válida.\n");
goto checa_qtdproduto;
}

total = precoProduto * qtdProduto;

printf("\n");
printf("Valor total do produto: %.2f\n", total);

printf("\n");
checa_pagamento:
printf("Qual vai ser forma de pagamento? 1: A vista | 2: Cartão: ");

scanf("%d", &formaPagamento);

switch (formaPagamento)
{
case 1:
total -= total * 0.07;
strcpy(strFormaPagamento, "A vista");
break;
case 2:
total += total * 0.09;
strcpy(strFormaPagamento, "Cartão");
break;
default:
printf("Forma de pagamento não é válida.\n");
goto checa_pagamento;
break;
}

valorMedio = total / qtdPessoas;

printf("\n\n");
printf("\n*********** Nota Fiscal ************\n");
printf("\n\n");
printf("Nome do cliente: %s\n", nomePessoa);
printf("Quantidade de pessoas: %d\n", qtdPessoas);
printf("Nome do produto: %s\n", nomeProduto);
printf("Quantidade do produto: %d\n", qtdProduto);
printf("Meio de pagamento: %s\n", strFormaPagamento);
printf("Total: %.2f\n", total);
printf("Media do valor: %.2f\n", valorMedio);
printf("\n\n");
printf("\n************************************\n");
}
return 1;
}
