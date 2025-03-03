#include <stdio.h>
#include <stdlib.h>
#include <time.h>
unsigned short rando16(int min, int max)
{
    unsigned short i=0,t,b,n=16, r=0;
    srand(clock());
    while(i<n)
    {
        t=clock();
        b=t&1;
        r=r+b*(1<<i);
        i++;
        int tmp=rand()%7867;
        for (int j = 0; j < tmp; j++);
    }
    return r%(max-min+1)+min;
}
int main()
{
    printf("%hu",rando16(10,20));
    return 0;
}