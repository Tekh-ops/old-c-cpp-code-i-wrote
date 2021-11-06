#include "declaration.h"

int main(int argc,char *argv[]) {
    int MAX,loop_counter,sum = 0;
    printf("Enter nothing");
    scanf("%d",&MAX);
    for ( loop_counter = 1; loop_counter < MAX; loop_counter = loop_counter + 2) {
        sum +=loop_counter/2;
    }
    printf("The sum is %d",sum);
    return 0;
}