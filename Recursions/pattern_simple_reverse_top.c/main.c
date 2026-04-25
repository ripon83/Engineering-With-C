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
int main()
{
    top(6);
    return 0;
}