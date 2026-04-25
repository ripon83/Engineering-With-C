#include <stdio.h>
#include <stdlib.h>
#include <time.h>
long rando64()
{
    long i=0,t,b,n=64, r=0;
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
    return r;
}
int main()
{
    printf("%ld",rando64());
    return 0;
}