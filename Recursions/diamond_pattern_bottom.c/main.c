#include <stdio.h>
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
int main()
{
    bottom(6);
    return 0;
}