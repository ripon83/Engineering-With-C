#include <stdio.h>
void pattern(int n)
{
    int i;
    if(n>=1)
        pattern(n-1);
    for(i=1;i<=n;i++)
        printf("%d\t",i);
    printf("\n");
    
}
int main()
{
    pattern(6);
    return 0;
}