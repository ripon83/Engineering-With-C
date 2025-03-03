#include <stdio.h>
#include <time.h>
#define getBit(s,k) ((s>>k)&1)
int rando32_a()
{
    int i=0, t, k, b, n=32, r=0;
    unsigned long int s=(unsigned long int)(&t);
    while(i<n)
    {
        s=s^clock(); 
        k=s%15;
        b=getBit(s,k);
        r=r+b*(1<<i);
        i++;
    }
    return r;
}
int main()
{
    printf("%d",rando32_a());
    return 0;
}