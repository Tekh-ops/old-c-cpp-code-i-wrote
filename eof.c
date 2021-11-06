#include <stdio.h>

int main()
{
    int c;
    FILE *IPFile;
    FILE *OPFile;
    IPFile = fopen("myfile.txt","r");
    OPFile = fopen("Myfile1.txt","w");

    while ((c = fgetc(IPFile)) != EOF)
    {
        fputc(c,OPFile);
    }
    fclose(IPFile);
    fclose(OPFile);
    return 0;
}