#include <stdio.h>
#include <math.h>
#define logn(n,b) log2(n)/log2(b)
int main()
{
    int n=1024;
    printf("The ln is: %lf\n",logn(n,4));
    return 0;
}