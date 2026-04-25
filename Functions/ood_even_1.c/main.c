#include<stdio.h>
int foo(int n)
{
    if(n&1)             //Odd, if((n&1)==1)
        return 1;       //return 1.
    return 0;           //else return 0;
}
int main()
{
	printf("%d  %d", foo(15),foo(20));	
	return 0;
}