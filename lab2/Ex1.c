#include <stdio.h>

main()
{
    unsigned int a = 1;
    int b = 0;
    while (a != 0) {
        a = a << 1;
        b ++;
    }
    printf("largest unsigned bit : %d\n",b);

    unsigned int c = 1;
    while (c > 0) {
        c ++;
    }
    printf("largest unsigned integer : %u\n",c - 1);
}