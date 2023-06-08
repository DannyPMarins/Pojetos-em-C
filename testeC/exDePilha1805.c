#include <stdio.h>
#include <locale.h>

#define MAX_PILHA 5

int topo, pilha[MAX_PILHA];


void inicia_pilha()
{
	topo = -1;
}

void push(int valor)
{
	topo++;
	pilha[topo] = valor;
}

void pop()
{
	pilha[topo] = 0;
	topo--;
}

void exibir_pilha()
{
	printf("\n-----------Valores da Pilha-----------\n");
	for(int i=topo; i>=0; i--)
	{
		if(i == topo)
		{
			printf("%d <- Topo\n", pilha[i]);
		} else {
			printf("%d\n", pilha[i]);
		}
	}
}


int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	int tmp;
	char yn;
	inicia_pilha();
	
	for(int i=0; i<MAX_PILHA; i++)
	{
		printf("Digite o %dº valor da pilha: ", i+1);
		scanf("%d", &tmp);
		push(tmp);
	}

voltar: 	
	exibir_pilha();
	
	printf("Deseja remover algo da pilha? S\\N: ");
	scanf("%s", &yn);
	
	if((yn == 's' || yn == 'S') && (topo > 0))
	{
			printf("%d", topo);
			pop();
			goto voltar;
	}
	else if(topo == 0)
	{
		printf("\nA pilha está vazia. Programa encerrado.");
	} else {
		printf("\nVocê decidiu encerrar o programa.");
	}
	return 0;
}