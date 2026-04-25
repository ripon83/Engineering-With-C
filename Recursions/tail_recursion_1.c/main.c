#include <stdio.h>
void foo(int n)
{
    if(n>=1)
    {
        printf("%d\t",n);        
        foo(n-1); 
    }
}
int main()
{
    foo(4);
    return 0;
}