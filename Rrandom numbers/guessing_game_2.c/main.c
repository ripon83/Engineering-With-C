#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int m,n,k=10;
    srand(clock());
    m=rand()%(k+1);
    printf("Guess a number between 0 to %d:",k+1);
    scanf("%d",&n);
    if(m==n)
        printf("The WINNER");
    else
        printf("Wrong guess: The number was %d",m);
    return 0;
}