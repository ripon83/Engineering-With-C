#include <stdio.h>
#include <x86intrin.h>
#include <time.h>
long prng64_sh(long seed)
{
    long i=0, x=0,y=0,z=0,k=5, m=0x5bd1e995,n=0x71b18589;
    while(i<k)
    {
        x=x^m;
        x+=(seed<<32)+(seed<<16)+(seed<<8)+(seed);
        y+=(x>>13)+(x>>15)+(x>>31)+x;
        y=y*n;
        z^=x+y;
        seed=z;
        i++;
    }
    return z;
}
long prng64()
{
    unsigned  long n;
    unsigned long int seed=(unsigned long int)&n;
    seed=seed^__rdtsc()^clock();
    return prng64_sh(seed);
}
int main()
{
    for(int i=0;i<10;i++)
        printf("%ld\t",prng64());
    return 0;
}