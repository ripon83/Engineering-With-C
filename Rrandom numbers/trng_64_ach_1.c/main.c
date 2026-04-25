#include <stdio.h>
#include <x86intrin.h>
#define getBit(z,k) ((z>>k)&1)
#define m 0x5bd1e995
#define n 0x71b18589
long trng64_ach()
{
    long i=0,r=0,b,x=0,y=0,z=0,k;
    static long seed3;
    unsigned long seed1=(unsigned long int)(&r);
    unsigned long seed2=(unsigned long int)(&seed3);
    while(i<64)
    {
        seed3+=(seed1^seed2)^__rdtsc();
        x=x^m;
        x+=(seed3<<32)+(seed3<<16)+(seed3<<8)+(seed3);
        y+=(x>>13)+(x>>15)+(x>>31)+x;
        y=y*n;
        z^=x+y;
        seed3=z;
        k=seed3%61;
        b=getBit(z,k);
        r=r+b*(1L<<i);
        seed1=seed2;
        seed2=seed3;
        i++;
    }
    return r;
}
int main()
{
    for(int i=0;i<10;i++)
        printf("%ld\t",trng64_ach());
    return 0;
}