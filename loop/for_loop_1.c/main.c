#include <stdio.h>
int main()
{
    int i=0;            //Demonstrating the control flow of the "for" loop
    for(printf("Initial\n");printf("Condition\n")&&i<4;++i&&printf("Update\n"))
    {
        printf("Inside\n");
    }
    printf("Outside\n");
    return 0;
}