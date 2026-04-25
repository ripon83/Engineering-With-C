#include <stdio.h>
int power(int x, int n)
{
    if(n==0)
        return 1;
    int tmp=power(x, n/2);
    if(n%2==0)
        return tmp*tmp;
    else
        return x*tmp*tmp;
}
int main()
{
    printf("%d",power(2,10));
    return 0;
}