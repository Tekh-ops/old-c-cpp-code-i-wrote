#include <stdio.h>

int main(void){
    char letter;
    char plus='+';
    int numLetter=1;
    int numPlus=4;
    scanf("%c",&letter);

    for(int i=0;i<5;i++){
        for(int j=0;j<numPlus;j++){
            printf("%c",plus);
        }

        for(int j=0;j<numLetter;j++){
            printf("%c",letter);
        }

        for(int j=0;j<numPlus;j++){
            printf("%c",plus);
        }
        printf("\n");
        numLetter+=2;
        numPlus-=1;
    }
   return 0;
}