#include <stdio.h>
int main()
{
    long double a=0, b=1, c,n=93; 
    int i;
    if(n==0||n==1)
        printf("%LF",a);
    for(i=2; i<=n; i++)
    {
         c=a+b;
         a=b;
         b=c;
    }
    printf("Fibonacci: %LF\n",c);
    return 0;
}