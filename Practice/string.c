#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char source[] = "Suyog Raut's marriage was one of the best marriage at Pune in 2008.";
    char* destination;
    strcpy(destination,source);
    printf("Source string:%s\n",source);
    printf("Destination string:%s\n",destination);
    return 0;
}
