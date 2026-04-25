#include <stdio.h>
void bottom(int n)
{
    int i;
    for(i=n;i>0;i--)
        printf("%d\t",i);
    printf("\n");
    if(n>=1)
        bottom(n-1);
}
int main()
{
    bottom(6);
    return 0;
}