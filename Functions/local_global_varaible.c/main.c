#include <stdio.h>
void foo()
{
	int m;
	m++;
	printf("m=%d\taddress of m=%p\n",m,&m);
}
int m=10;
int main()
{
	foo();
	printf("m=%d\taddress of m=%p",m,&m);
	return 0;
}