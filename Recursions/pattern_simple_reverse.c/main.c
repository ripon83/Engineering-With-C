#include <stdio.h>
void top(int n)
{
    int i;
    if(n>=1)
        top(n-1);
    for(i=n;i>0;i--)
        printf("%d\t",i);
    printf("\n");
}
void bottom(int n)
{
    int i;
    for(i=n;i>0;i--)
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