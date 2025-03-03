#include <stdio.h>
#include <x86intrin.h>
#include <time.h>
#define getBit(z,k) ((z>>k)&1)
#define m 0x5bd1e995
#define n 0x71b18589
short trng16_ch()
{
    short i=0,r=0,b,x=0,y=0,z=0,k;
    static unsigned long int seed3=0xab;
    unsigned long int seed1=clock();
    unsigned long int seed2=__rdtsc();
    while(i<16)
    {
        seed3+=(seed1^seed2)^(__rdtsc()^clock());
        x=x^m;
        x+=(seed3<<8)+(seed3);
        y+=(x>>3)+(x>>7)+x;
        y=y*n;
        z^=x+y;
        seed3=z;
        k=seed3%11;
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
        printf("%hi\t",trng16_ch());
    return 0;
}