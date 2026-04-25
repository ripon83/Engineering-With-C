#include <stdio.h>
#include <time.h>
int rando32()
{
    int i=0,t,b,n=32, r=0;
    printf("Iteration\tClock\tLSB\tNumber\n");
    while(i<n)
    {
        printf("%d\t\t",i+1);
        t=clock();
        printf("%d\t",t);
        b=t&1;
        printf("%d\t",b);
        r=r+b*(1<<i);
        printf("%d\n",r);
        i++;
    }
    return r;
}
int main()
{
    printf("%d",rando32());
    return 0;
}