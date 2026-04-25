#include <stdio.h>
void foo(int n)
{
    static int k=0;
    if(k<=n)
    {
        k++;
        for(int i=k;i>0;i--)
            printf("%d\t",i);
        printf("\n");
        foo(n); 
    }
}
int main()
{
    foo(4);
    return 0;
}