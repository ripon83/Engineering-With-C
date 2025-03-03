#include <stdio.h>
#define getBit(z,k) ((z>>k)&1)
short prng16_h()
{
    static short seed=0xab;
    short i=0,r=0,b,x=0,y=0,z=0,k, m=0xe995,n=0x8589;
    while(i<16)
    {
        x=x^m;
        x+=(seed<<16)+(seed<<8)+(seed);
        y+=(x>>13)+(x>>15)+x;
        y=y*n;
        z^=x+y;
        seed=z;
        k=seed%11;
        b=getBit(z,k);
        r=r+b*(1<<i);
        i++;
    }
    return r;
}
int main()
{
    for(int i=0;i<10;i++)
        printf("%hi\t",prng16_h());
    return 0;
}