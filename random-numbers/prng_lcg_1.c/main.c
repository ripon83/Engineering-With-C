#include <stdio.h>
int main()
{
    int xn,xn1,a=3,c=5,m=11;
    printf("Enter the previous random number:");
    scanf("%d",&xn);
    xn1=(a*xn+c)%m;
    printf("The generated random number is: %d",xn1);
    return 0;
}