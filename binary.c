#include <stdio.h>

int main()
{
    FILE *ptr;
    int exe[10];
    ptr = fopen("a.exe","rb");
    fscanf(ptr,"%d",exe);
    printf("%d",exe);
    fclose(ptr);
    return 0;
}