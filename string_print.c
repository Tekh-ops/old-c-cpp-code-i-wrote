/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char a[2][7] = {{"Hello"},{"World"}};
    
    for (int i=0;i<=2;i++) {
        for (int j=0;j<=6;j++) {
            printf("%c",a[i][j]);
        }
    }
    return 0;
}
