#include <stdio.h>
#include <time.h>
short rando16()
{
    short i=0,t,b,n=16, r=0;
    printf("Iteration\tClock\tLSB\tNumber\n");
    while(i<n)
    {
        printf("%hi\t\t",i+1);
        t=clock();
        printf("%hi\t",t);
        b=t&1;
        printf("%hi\t",b);
        r=r+b*(1<<i);
        printf("%hi\n",r);
        i++;
    }
    return r;
}
int main()
{
    printf("%hi",rando16());
    return 0;
}