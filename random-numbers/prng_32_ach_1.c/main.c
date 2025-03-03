#include <stdio.h>
#include <x86intrin.h>
#define getBit(z,k) ((z>>k)&1)
#define m 0x5bd1e995
#define n 0x71b18589
int trng32_ach()
{
    int i=0, r=0,b,x=0,y=0,z=0,k=5;
    static unsigned long int seed3;
    unsigned long int seed1=(unsigned long int)(&r);
    unsigned long int seed2=(unsigned long int)(&seed3);
    while(i<32)
    {
        seed3+=(seed1^seed2)^__rdtsc();
        x=x^m;
        x+=(seed3<<16)+(seed3<<8)+(seed3);
        y+=(x>>13)+(x>>15)+x;
        y=y*n;
        z^=x+y;
        seed3=z;
        k=seed3%31;
        b=getBit(z,k);
        r=r+b*(1<<i);
        seed1=seed2;
        seed2=seed3;
        i++;
    }
    return r;
}
int main()
{
    for(int i=0;i<10;i++)
        printf("%d\t",trng32_ach());
    return 0;
}