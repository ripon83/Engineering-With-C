#include<stdio.h>
int sum(int i)
{
	static int csum=0;
	csum=csum+i;
	return csum;
}
int main()
{
	int i,j,n=10;
	for (i=1;i<=n;i++)
	{
	        j = sum(i);
	        printf("%d\t", j);
	}
	return 0;
}