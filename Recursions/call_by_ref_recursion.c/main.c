#include <stdio.h>
int fun(int n, int *p)
{
    int x,y;
    if (n <= 2) 
    {
        *p = 1;
        return 1;
    }
    x = fun(n-1, p);
    y = x + *p;
    *p = x;
    return y;
}  
int main()
{
    int n=15;
    printf("%d\n",fun(5,&n));
    return 0;
}