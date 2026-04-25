#include<stdio.h>
int foo(int n)
{
    if(n%2)         //same as the if(n%2==1)             
        printf("%d is odd\n",n);     
    else
        printf("%d is even\n",n);
}
int main()
{
	foo(15);
	foo(20);	
	return 0;
}