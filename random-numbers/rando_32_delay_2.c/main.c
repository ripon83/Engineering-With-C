#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rando32()
{
    int i=0,t,b,n=32, r=0;
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
    printf("%d",rando32());
    return 0;
}