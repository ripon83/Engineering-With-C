#include <stdio.h>
#define a 7873
#define c 5827
#define m 11
int prng()
{
    static int xn=5;
    int xn1;
    xn1=(a*xn+c)% m;
    xn=xn1;
    return xn1;
}
int main()
{
    for(int i=0;i<10;i++)
        printf("%d\t",prng());
    return 0;
}