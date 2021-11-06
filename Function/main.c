#include <stdio.h>
#include "max.h"
#include "min.h"

int count;

int main(){
    int max_1,max_2,max_3,max_4;
    int min_1,min_2,min_3,min_4;

    max_1 = max (34,23,22);
    max_2 = max(314,123,122);
    max_3 = max(234,223,222);
    max_4 = max(4,25,5);

    min_1 = min(34,23,22);
    min_2 = min(314,123,122);
    min_3 = min(234,223,222);
    min_4 = min(4,25,5);

    printf("The Difference between the highest and the lowest is %d\n",max_1 - min_1);
    printf("The Difference between the highest and the lowest is %d\n",max_2 - min_2);
    printf("The Difference between the highest and the lowest is %d\n",max_3 - min_3);
    printf("The Difference between the highest and the lowest is %d\n",max_4 - min_4);

    count ++;
    printf("No. of times functions called are %d\n",count);

    return 0;
}
