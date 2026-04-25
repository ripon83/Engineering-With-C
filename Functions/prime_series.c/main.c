#include <stdio.h>
#include <math.h>
int prime(int n)                    //Check whether n is prime or not
{
    int tmp=sqrt(n);                //Reduces number of steps
    for(int i=2;i<=tmp;i++)         //Iterates from i=2 to sqrt(n)
        if(n%i==0)                  //If n is divisble by 
            return 0;               //Return 0, means composite number
    return 1;                       //Return 1 means prime number
}
void primeSeries(int n)
{
    for(int i=2;i<=n;i++)           //Check i=2 to n for primality
        if(prime(i))                //If i is prime number
            printf("%d\t",i);       // Print the i
}
int main() 
{
    primeSeries(1000);
    return 0;
}