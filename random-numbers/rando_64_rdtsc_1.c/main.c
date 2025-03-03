#include <stdio.h>
#include <x86intrin.h>
#define getBit(x,k) ((x>>k)&1)
long rando64_c()
{
    long t, n=64, i = 0, b, r=0;
    while(i<n)
    {
        t= __rdtsc();
        b=getBit(t,t%11);
        r=r+b*(1L<<i);
        i++;
    }
    return r;
}
int main()
{
    printf("%ld",rando64_c());
}