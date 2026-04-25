#include <stdio.h>
void bottom(int n)
{
    int i;
    for(i=1;i<=n;i++)
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