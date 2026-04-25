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
int main() 
{
    int m=17;
    if(prime(m))
        printf("%d is a prime number",m);
    else
        printf("%d is not a prime number",m);
    return 0;
}