#include <stdio.h>
int main()
{
   long double fact=1;
    int i,n=1754;
    for(i=1;i<=n;i++)
        fact=fact*i;
    printf("%LE",fact);
    return 0;
}