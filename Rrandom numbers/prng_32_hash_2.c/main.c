#include <stdio.h>
int prng32()
{
    int i=0,x=0,y=0,z=0,k=5, m=0x5bd1e995,n=0x71b18589;
    static unsigned int seed=0xab;
    while(i<k)
    {
        x=x^m;
        x+=(seed<<16)+(seed<<8)+(seed);
        y+=(x>>13)+(x>>15)+x;
        y=y*n;
        z^=x+y;
        seed=z;
        i++;
    }
    return z;
}
int main()
{
    for(int i=0;i<10;i++)
        printf("%d\t",prng32());
    return 0;
}