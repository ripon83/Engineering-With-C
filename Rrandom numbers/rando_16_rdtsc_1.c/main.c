#include <stdio.h>
#include <x86intrin.h>
#define getBit(x,k) ((x>>k)&1)
short rando16_c()
{
    short n=16, i = 0, b, r=0;
    while(i<n)
    {
        long t= __rdtsc();
        b=getBit(t,t%11);
        r=r+b*(1<<i);
        i++;
    }
    return r;
}
int main()
{
    printf("%hi",rando16_c());
}