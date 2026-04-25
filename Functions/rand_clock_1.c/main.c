#include <stdio.h>
#include <time.h>
#include <stdlib.h>
unsigned int randClock()
{
    srand(clock());
    int i,n=rand();
    unsigned int t;
    for(i=0;i<n;i++);
    t=clock();
    return t;
}
int main()
{
    printf("Random clock value:%u",randClock());
    return 0;
}