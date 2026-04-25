#include <stdio.h>
void floyd(int n)
{
    if(n>1)
        floyd(n-1);
    static int counter=1;
    for(int i=1;i<=n;i++)
        printf("%d\t",counter++);
    printf("\n");
}
int main() 
{
    int n=5;
    floyd(n);
    return 0;
}