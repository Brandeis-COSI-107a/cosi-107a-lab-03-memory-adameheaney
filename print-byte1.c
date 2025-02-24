#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    for(int i = 1; i < argc; i++) {
        long binary = strtol(argv[i], NULL, 0);
        unsigned char low = 0xFF & (binary >>8);
        
        printf("0x%02X %3d\n", low, low);
    }

    return 0;
}
