#include <stdio.h>
int main()
{
    int i,n=28,sum=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
        printf("The %d is a perfect number",n);
    else
        printf("The %d is not a perfect number",n);

    return 0;
}