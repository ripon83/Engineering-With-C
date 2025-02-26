#include <stdio.h>
int main()
{
   long double fact=1;
    int i,n=25;
    for(i=1;i<=n;i++)
        fact=fact*i;
    printf("%LF",fact);
    return 0;
}