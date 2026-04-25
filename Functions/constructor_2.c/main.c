#include<stdio.h>
void __attribute__((constructor)) foo()
{
    printf("Before executing the main function,\n");
    printf("the constructor is executed.\n");
}
void __attribute__((destructor)) fobar()
{
    printf("After executing the main function,\n");
    printf("the destructor is executed.\n");
}
int main()
{
    printf("The main program is executed executed.\n");
    return 0;
}