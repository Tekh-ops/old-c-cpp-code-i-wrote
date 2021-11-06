/* This program calculate the multiplication of 2 matrices of 3x2 and 2x3 */

#include <stdio.h>

#define ROWS1 2
#define COLUMNS1 3
#define ROWS2 3
#define COLUMNS2 2

int main()
{
	int matrixA[ROWS1][COLUMNS1];
	int matrixB[ROWS2][COLUMNS2];
	int matrixO[ROWS1][COLUMNS2]={0};
	int i,j,k;

	printf("Enter the value of 1st Matrix.\n");
	for(i=0;i<ROWS1;i++){
		for(j=0;j<COLUMNS1;j++){
			printf("Enter Value:");
			scanf("%d",&matrixA[i][j]);
		}
	}
	printf("\nMatrix 1 Representation \n\n");
	for ( i = 0; i < ROWS1; i++)
	{
		for ( j = 0; j < COLUMNS1; j++)
		{
			printf("%d\t",matrixA[i][j]);
			printf("\n");
		}
		
	}
	printf("Enter the value of 2nd Matrix.\n");
	for ( i = 0; i < ROWS2; i++)
	{
		for ( j = 0; j < COLUMNS2; j++)
		{
			printf("Enter Value:");
			scanf("%d",&matrixB[i][j]);
		}
		
	}
	printf("\nMatrix 2 Representation\n\n");
	for ( i = 0; i < ROWS2; i++)
	{
		for ( i = 0; i < COLUMNS2; i++)
		{
			printf("%d\t",matrixB[i][j]);
			printf("\n");
		}
		
	}
	printf("\nMultiplication of Matrix is: \n");
	for ( i = 0; i < ROWS1; i++)
	{
		for ( j = 0; j < COLUMNS2; j++)
		{
			for ( k = 0; k < ROWS2; k++)
			{
				matrixO[i][j] = matrixO[i][j] + matrixA[i][k]*matrixB[k][j];
				printf("%d\t",matrixO[i][j]);
			}
			
		}
		
	}
	

	return 0;
}