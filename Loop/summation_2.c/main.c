#include <stdio.h>
#include <math.h>
int main()
{
    int i,n=10;
    double sum=0.0;
    for(i=1;i<=n;i++)
        sum+=1/sqrt(i);
    sum=sum/n;
    printf("The result is: %lf",sum);
    return 0;
}