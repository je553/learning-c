#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char * color = argv[4];
    char * even = "odd";

    // find smallest number
    int smallest;
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int num3 = atoi(argv[3]);

    if(num1 < num2) {
        smallest = num1;
    } else {
        smallest = num2;
    }

    if(smallest > num3) {
        smallest = num3;
    }

    printf("%d\n", smallest);

    // print color that many times
    for(int i = 1; i <= smallest; i++) {
        printf("%s\n", color);
    }

    // determine if even or odd, print
    if(smallest % 2 == 0) {
        even = "even";
    }

    printf("%s\n", even);

    return(0);
}
