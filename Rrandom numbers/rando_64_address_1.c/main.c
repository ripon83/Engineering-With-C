#include <stdio.h>
#include <time.h>
#define getBit(s,k) ((s>>k)&1)
long rando64_a()
{
    long i=0, t, k, b, n=64, r=0;
    unsigned long s=(unsigned long )(&t);
    while(i<n)
    {
        s=s^clock(); 
        k=s%15;
        b=getBit(s,k);
        r=r+b*(1L<<i);
        i++;
    }
    return r;
}
int main()
{
    printf("%ld",rando64_a());
    return 0;
}