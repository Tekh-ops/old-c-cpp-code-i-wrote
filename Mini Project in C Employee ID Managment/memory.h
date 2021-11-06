#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t len = 4;
    float *buf = malloc(len * sizeof *buf);

    if(buf == NULL) {     // check for NULL        
        printf("Not enough memory to allocate.\n");
        return 1;
    }

    size_t i = 0;
    float *temp; // to save buf in case realloc fails

    // read until EOF or matching failure occurs
    // signal the end of input(EOF) by pressing Ctrl+D on *nix
    // and Ctrl+Z on Windows systems

    while(scanf("%f", buf+i) == 1) { 
        i++;
        if(i == len) {               // buf is full
            temp = buf;
            len *= 2;
            buf = realloc(buf, len * sizeof *buf);  // reallocate buf
            if(buf == NULL) {
                printf("Not enough memory to reallocate.\n");
                buf = temp;
                break;
            }
        }
    }

    if(i == 0) {
        printf("No input read\n");
        return 1;
    }

    // process buf

    for(size_t j = 0; j < i; j++) {
        printf("%.2f ", buf[j]);
        // do stuff with buff[j]
    }

    free(buf);
    buf = NULL;

    return 0;
}