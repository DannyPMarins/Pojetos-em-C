#include <stdio.h>

int main(){
	int lista[2][3] = {
		{11, 22 ,33},
	    {44, 55, 66}
	};

	int rows = sizeof(lista) / sizeof(lista[0]);
	int columns = sizeof(lista[0]) / sizeof(lista[0][0]);

	printf("fileras: %d\n", rows);
	printf("colunas: %d\n", columns);

	for (int i = 0; i < 2; i++)
	{
		for (int y = 0; y < 3; y++)
		{
			printf("%d ", lista[i][y]);
		}
		printf("\n");
		
	}
	


}