#include <stdio.h>
int main()
{
    long counter=0,n=1024,i;
    for(i=2;i<=n;i=i*i)         //Time complexity is O(loglogn)
        counter++;
    printf("The body of the loop is executed %ld times\n",counter);
    return 0;
}