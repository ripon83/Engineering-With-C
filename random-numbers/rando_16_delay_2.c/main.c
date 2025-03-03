#include <stdio.h>
#include <stdlib.h>
#include <time.h>
short rando16()
{
    short i=0,t,b,n=16, r=0;
    srand(clock());
    while(i<n)
    {
        t=clock();
        b=t&1;
        r=r+b*(1<<i);
        i++;
        for (int j = 0; j < rand(); j++);
    }
    return r;
}
int main()
{
    printf("%hi",rando16());
    return 0;
}