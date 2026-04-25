#include <stdio.h>
#include <time.h>
long rando64()
{
    long i=0,t,b,n=64, r=0;
    printf("Iteration\tClock\tLSB\tNumber\n");
    while(i<n)
    {
        printf("%ld\t\t",i+1);
        t=clock();
        printf("%ld\t",t);
        b=t&1;
        printf("%ld\t",b);
        r=r+b*(1L<<i);
        printf("%ld\n",r);
        i++;
    }
    return r;
}
int main()
{
    printf("%ld",rando64());
    return 0;
}