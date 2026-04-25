#include<stdio.h>  
void B(int);
void C(int);
void A(int n)
{
    if(n>=1)
    {
        printf("%d\t",n);
        B(n/2);
    }
}
void B(int n)
{
    if(n>=1)
    {
        printf("%d\t",n);
        C(n/4);
    }
}
void C(int n)
{
    if(n>=1)
    {
        printf("%d\t",n);
        A(n/8);
    }
}
int main()
{
    A(1024);
}