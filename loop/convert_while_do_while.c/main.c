#include<stdio.h>
int main()
{
    int i=0;
    while(1)
    {
        printf("%d\t",i);
        i++;
        if(i==10)
            break;
    }
}