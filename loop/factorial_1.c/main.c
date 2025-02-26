#include <stdio.h>
int main()
{
    unsigned long int fact=1;
    int i,n=20;
    for(i=1;i<=n;i++)
        fact=fact*i;
    printf("%lu",fact);
    return 0;
}