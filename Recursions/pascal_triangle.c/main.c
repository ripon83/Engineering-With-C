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
    int c=1;
    for(int j=1; j<=n; j++) 
    {
        printf("%d ", c);
        c=c*(n-j)/j;
    }
    printf("\n");
}
void pascal_bottom(int n)
{
    static int counter=1;
    for(int j=0; j<=counter; j++) 
            printf(" "); 
    counter++;
    int c=1; 
    for(int j=1; j<=n; j++) 
    {
        printf("%d ", c);
        c=c*(n-j)/j;
    }
    printf("\n");
    if(n>0)
        pascal_bottom(n-1);
}
void pascal(int n)
{
    pascal_top(n);
    pascal_bottom(n-1);
}
int main()
{
    pascal(5);
    return 0;
}