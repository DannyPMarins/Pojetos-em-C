#include <stdio.h>
/*
Questão 02: Fazer um programa para preenchher uma matriz 3x3 e depois exibir os valores da mesma de trás para frente
*/

void main()
{
   int x, i, a[3][3];

   for(i=0;i<3;i++)
      {
	  printf("element - %d : ",i);
	  scanf("%d",&a[i]);
	  }
      
 
   printf("\n\nThe values store into the array in reverse are :\n");
   for(i=3-1;i>=0;i--)
      {
	   printf("% 5d",a[i]);
	  }
   printf("\n\n");
} 