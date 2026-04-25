#include <stdio.h>
void top(int n)
{
    int i, k=0;
    static int c=0;
    if(n>=1)
    {
        k=++c;
        top(n-1);
    }
    for(i=k;i>=1;i--)
        printf("\t");
    for(i=1;i<=n;i++)
        printf("%d\t",i);
    for(i=n-1;i>=1;i--)
        printf("%d\t",i);
    printf("\n");
}
void bottom(int n)
{
    int i, k=0;
    static int c=2;
    for(i=c++;i>=1;i--)
        printf("\t");
    for(i=1;i<=n;i++)
        printf("%d\t",i);
    for(i=n-1;i>=1;i--)
        printf("%d\t",i);
    printf("\n");
    if(n>=1)
        bottom(n-1);
}

void pattern(int n)
{
    top(n);
    bottom(n-1);
}
int main()
{
    pattern(6);
    return 0;
}