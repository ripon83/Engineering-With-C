#include<stdio.h>
void __attribute__((constructor)) foo()
{
    printf("I am in foo\n");
}
void __attribute__((destructor)) fobar()
{
    printf("I am in fobar\n");
}
int main()
{
    printf("I am in main\n");
    return 0;
}