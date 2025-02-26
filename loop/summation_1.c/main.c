#include<stdio.h>
#include<math.h>
int main()
{
    int i,n=100;
    double sum=0.0,x=2.5;
    for(i=0;i<n;i++)
        sum+=1/sqrt(pow(x,i));
    printf("The summation is: %lf\n",sum);
    return 0;
}