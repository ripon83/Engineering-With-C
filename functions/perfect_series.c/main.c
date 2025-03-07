#include <stdio.h>
int perfect(int n)
{
    int i,sum=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
            sum=sum+i;
    }
    if(sum==n)
        return 1;
    return 0;
}
void perfectSeries(int n)
{
    for(int i=1;i<=n;i++)
        if(perfect(i))
            printf("%d\t",i);
}
int main()
{
    perfectSeries(10000);
    return 0;
}