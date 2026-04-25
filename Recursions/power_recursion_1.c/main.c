#include <stdio.h>
long int power(int m, int n)
{
   if (n==0)
       return 1;
   if (n%2==0)
       return power(m*m,n/2); 
   return power(m*m,n/2)*m;
}
int main()
{
    int m=2,n=10;
    printf("%d^%d=%ld\n",m,n,power(m,n));
    return 0;
}