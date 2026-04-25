#include <stdio.h>
int main()
{
    int i=0;                //Demonstrating the control flow of the "for" loop
    for(printf("Executed only once\n");printf("Condition checking %d<4\n",i)&&i<4;++i,printf("Update\n"))
    {
        printf("Inside the loop\n");
    }
    printf("Outside the loop\n");
    return 0;
}