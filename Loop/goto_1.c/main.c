#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n=rand();
    if(n%2==0)
        goto even;
    else
        goto odd;
    even:               //label
        printf("%d is an even number",n);
        return 0;
    odd:                //label
        printf("%d is an odd number",n);
    return 0;
}