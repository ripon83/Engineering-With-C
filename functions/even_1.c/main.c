#include <stdio.h>
void show(int n)
{
    if(n<0)
    {
        printf("The n cannot be negative");
        return;
    }
    for(int i=0;i<=n;i=i+2)
            printf("%d\t",i);
}
int main()
{
    show(100);
    return 0;
}