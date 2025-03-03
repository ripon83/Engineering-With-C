#include <stdio.h>
short prng16(short seed)
{
    short i=0,x=0,y=0,z=0,k=5, m=0xe995,n=0x8589;
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
int main()
{
    short n,seed=0xab;
    for(int i=0;i<10;i++)
    {
        n=prng16(seed);
        printf("%hi\t",n);
        seed=n;
    }
    return 0;
}