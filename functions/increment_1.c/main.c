#include<stdio.h>
int foo(int n)
{
    return n++;
}
int main()
{
	printf("%d", foo(15));	
	return 0;
}