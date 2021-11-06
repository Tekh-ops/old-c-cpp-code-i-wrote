/* This program add 2 matrices of 2 rows and 3 columns */

#include <stdio.h>
#define ROWS 2
#define COLUMNS 3

int main()
{
	int matrixA[ROWS][COLUMNS];
	int matrixB[ROWS][COLUMNS];
	int matrixO[ROWS][COLUMNS];
	int i,j;	

	printf("Enter the value of 1st matrix.\n");
	for(i = 0;i<ROWS;i++){
		for(j = 0;j<COLUMNS;j++){
			printf("Enter value:");
			scanf("%d",&matrixA[i][j]);
	}
}
	printf("\nMatrix 1 Representation\n\n");
	for(i=0;i<ROWS;i++){
		for(j=0;j<COLUMNS;j++){
			printf("%d\t",matrixA[i][j];
			printf("\n");
	}
}
	printf("Enter the value of 2nd matrix.\n");
	for(i=0;i<ROWS;i++){
		for(j=0;j<COLUMNS;j++){
			prinf("Enter value:");
			scanf("%d",&matrixB[i][j];
	}
}
	printf("Matrix 2 Representation\n\n");
	for(i=0;i<ROWS;i++){
		for(j=0;j<COLUMNS;j++){
			printf("%d\t",matrixB[i][j];
			printf("\n");
	}
}
	printf("\nRESULT:\n");
	for(i=0;i<ROWS;i++){
		for(j=0;j<COLUMNS;j++){
			matrixO[i][j]=matrixA[i][j]+matrixB[i][j];
			printf("%d\t",matrixO[i][j];
			printf("\n");
	}
}

return 0;
}