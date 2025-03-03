#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m,n,k=10;
    m=rand()%(k+1);
    printf("Guess a number between 0 to %d:",k+1);
    scanf("%d",&n);
    if(m==n)
        printf("The WINNER");
    else
        printf("Wrong guess");
    return 0;
}