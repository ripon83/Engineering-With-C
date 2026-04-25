#include<stdio.h>
int foo()
{
    static int n=0;
    return ++n + ++n;
}
int main()
{
	printf("%d  %d  %d",foo(),foo(),foo());	
	return 0;
}