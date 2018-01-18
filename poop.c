#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char * name = argv[4];
    char * amount = argv[5];

    int i = 0;
    int n = amount[1] - '0';
    while (i < n) {
        printf("%s\n", name);
        i++;
    };

    return(0);
}
