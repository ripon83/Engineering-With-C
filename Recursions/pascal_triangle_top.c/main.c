#include <stdio.h>
void pascal_top(int n)
{
    int i=0;
    static int counter=0;
    if(n>0)
    {
        i=++counter;
        pascal_top(n-1);
    }
    for(int j=0; j<i; j++) 
            printf(" "); 
    int c=1; // coefficient
    for(int j=1; j<=n; j++) 
    {
        printf("%d ", c);
        c=c*(n-j)/j;
    }
    printf("\n");
}
int main()
{
    pascal_top(5);
    return 0;
}