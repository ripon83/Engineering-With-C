#include <stdio.h>
#define getBit(z,k) ((z>>k)&1)
int prng32_h()
{
    static int seed=0xab;
    int i=0,r=0,b,x=0,y=0,z=0,k, m=0x5bd1e995,n=0x71b18589;
    while(i<5)
    {
        x=x^m;
        x+=(seed<<16)+(seed<<8)+(seed);
        y+=(x>>13)+(x>>15)+x;
        y=y*n;
        z^=x+y;
        seed=z;
        k=seed%31;
        b=getBit(z,k);
        r=r+b*(1<<i);
        i++;
    }
    return r;
}
int main()
{
    for(int i=0;i<10;i++)
        printf("%d\t",prng32_h());
    return 0;
}