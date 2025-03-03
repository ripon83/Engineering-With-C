#include <stdio.h>
#include <time.h>
#define getBit(s,k) ((s>>k)&1)
long rando64_a()
{
    long i=0,t,k,b,n=64,r=0;
    static unsigned long int s3=0;
    unsigned long int s1=(unsigned long int)(&i);
    unsigned long int s2=(unsigned long int)(&s3);
    while(i<n)
    {
        s3+=(s1^s2);        //Fibonacci number mechanism
        s1=s2;
        s2=s3;
        k=s3%61;
        b=getBit(s3,k);
        r=r+b*(1L<<i);
        i++;
    }
    return r;
}
int main()
{
    for(int i=0;i<10;i++)
        printf("%ld\t",rando64_a());
    return 0;
}