#include <stdio.h>
#include <x86intrin.h>
#include <time.h>
short prng16_sh(unsigned int seed)
{
    short i=0, x=0,y=0,z=0,k=5, m=0xe995,n=0x8589;
    while(i<k)
    {
        x=x^m;
        x+=(seed<<8)+(seed);
        y+=(x>>3)+(x>>7)+x;
        y=y*n;
        z^=x+y;
        seed=z;
        i++;
    }
    return z;
}
int prng16()
{
    unsigned  int n;
    unsigned long int seed=(unsigned long int)&n;
    seed=seed^__rdtsc()^clock();
    return prng16_sh(seed);
}
int main()
{
    for(int i=0;i<10;i++)
        printf("%d\t",prng16());
    return 0;
}