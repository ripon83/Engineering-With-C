//#include <stdio.h>
#include <x86intrin.h>
#define getBit(z,k) ((z>>k)&1)

unsigned int trng32_ach()
{
    unsigned int m=0x5bd1e995;
    unsigned int n=0x71b18589;
    unsigned int r=0,b,x=0,y=clock(),z=0,k=5;
    static unsigned long int seed3;
    unsigned long int seed1=(unsigned long int)(&r);
    unsigned long int seed2=(unsigned long int)(&seed3);
    int i=0;
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
/*int main()
{
    for(int i=0;i<10;i++)
        printf("%u\t",trng32_ach());
    return 0;
}*/