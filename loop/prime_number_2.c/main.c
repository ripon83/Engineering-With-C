#include <stdio.h>
#include <math.h>
int main()
{
    int i,n=25,flag=0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("%d is a prime number\n",n);
    else
        printf("%d is not a prime number\n",n);
    return 0;
}