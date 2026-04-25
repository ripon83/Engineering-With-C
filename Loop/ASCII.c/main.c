#include <stdio.h>
int main()
{
    int counter=0;
    for(int i=32;i<127;i++)
    {
        printf("%c is %d \t",i,i);
        counter++;
        if(counter==5)
        {
            printf("\n");
            counter=0;
        }
    }
    return 0;
}