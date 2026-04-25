#include <stdio.h>
int main()
{
    for(int i=0;i<1000;i++)         
    {
        if(i==10)
            break;
        printf("%d\t",i);
    }
    return 0;
}