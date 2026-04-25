#include <stdio.h>
void pascal_bottom(int n)
{
    static int counter=1;
    for(int j=0; j<=counter; j++) 
            printf(" "); 
    counter++;
    int c=1; // coefficient
    for(int j=1; j<=n; j++) 
    {
        printf("%d ", c);
        c=c*(n-j)/j;
    }
    printf("\n");
    if(n>0)
        pascal_bottom(n-1);
}

int main()
{
    pascal_bottom(5);
    return 0;
}