/* Program to get matrix multiplication */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int matrixA[2][2]= { {1,2},
                         {32,4} };

    int matrixB[2][2]= { {9,3},
                         {5,1} };
    //int rows, columns;

    //printf("\tWelcome to matrix calculation program\n\tEnter the number of rows and columns for matrix calculation\n");
    //scanf("%d", &rows);
    //scanf("%d",&columns);

    //ptr = (int *) malloc (matrixNUM*sizeof(int));
    /*for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\n",matrixA[i][j]*matrixB[i][j]);
        }
        
    }
    */

   /*for (int i = 0; i < 2; i++)
   {
       for (int j = 0; j < 2; j++)
       {
           printf("%d\n",matrixA[0][0]*matrixA[0][0]);
       }
       
   }*/

   printf("%d",matrixA[2][0]);
   

    return 0;
}
