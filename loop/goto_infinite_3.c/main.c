#include <stdio.h>
int main()
{
    int n=7;
    odd:
        printf("odd\t");
    even:
        printf("Even\t");
    if(n&1)
        goto odd;
    else
        goto even;
    return 0;
}