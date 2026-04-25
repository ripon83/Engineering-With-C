#include <stdio.h>
long int sum(int m,int n)
{
    if(m==0)
        return n;
    return sum(m-1,n+1);
}
int main()
{
    int m=5,n=10;
    printf("The addition of %d and %d is %ld",m,n,sum(m,n));
    return 0;
}