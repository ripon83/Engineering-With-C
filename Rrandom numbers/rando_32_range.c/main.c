#include <stdio.h>
#include <stdlib.h>
#include <time.h>
unsigned int rando32(int min, int max)
{
    unsigned int i=0,t,b,n=32,r=0;
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
    printf("%u",rando32(10,2000));
    return 0;
}