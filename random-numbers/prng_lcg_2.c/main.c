#include <stdio.h>
int prng()
{
    static int xn=7,xn1,a=3,c=5,m=11;
    xn1=(a*xn+c)%m;
    xn=xn1;
    return xn1;
}
int main()
{
    for(int i=0;i<10;i++)
        printf("%d\t",prng());
    return 0;
}