//Efficient prime number detection method

#include <stdio.h>
#include <math.h>
int main()
{
    int i,n=25,s,flag=0;
    s=sqrt(n);
    for(i=2;i<=s;i++)
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