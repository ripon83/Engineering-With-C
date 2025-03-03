#include <stdio.h>
#include <time.h>
long rando64()
{
    long i=0,t,b,n=64, r=0;
    while(i<n)
    {
        t=clock();
        b=t&1;
        r=r+b*(1L<<i);
        i++;
    }
    return r;
}
int main()
{
    printf("%ld",rando64());
    return 0;
}