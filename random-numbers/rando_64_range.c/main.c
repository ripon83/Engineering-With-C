#include <stdio.h>
#include <stdlib.h>
#include <time.h>
unsigned long rando64(long min, long max)
{
    unsigned long i=0,t,b,n=64,r=0;
    srand(clock());
    while(i<n)
    {
        t=clock();
        b=t&1;
        r=r+b*(1L<<i);
        i++;
        int tmp=rand()%7867;
        for (int j = 0; j < tmp; j++);
    }
    return r%(max-min+1)+min;
}
int main()
{
    printf("%lu",rando64(10,2000));
    return 0;
}