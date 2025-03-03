#include <stdio.h>
long prng64(long seed)
{
    long i=0,x=0,y=0,z=0,k=5, m=0x5bd1e995,n=0x71b18589;
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
int main()
{
    long n,seed=0xab;
    for(int i=0;i<10;i++)
    {
        n=prng64(seed);
        printf("%ld\t",n);
        seed=n;
    }
    return 0;
}