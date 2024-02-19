#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

FILE *file;

int main(int argc, char **argv)
{
    if(argc < 2)
    {
        printf("Usage : <file_name>\n");
        return 0;
    }

    file = fopen(argv[1], "rb");

    uint8_t contents[16];

    memset(contents, 0, 16);

    int idx = 0;

    while (idx < 16)
    {
        contents[idx] = fgetc(file);
        idx++;
    }
    
    idx = 0;
    while(idx < 16)
    {
        printf("%x ", contents[idx]);
        idx++;
    }
    printf("\n");

    return 0;
}