#include <stdio.h>
int main()
{
    long counter=0,n=1024,i;
    for(i=1;i<=n;i=1<<i)            //i=1<<i is the same as i=pow(2,i)
        counter++;
    printf("The body of the loop is executed %ld times\n",counter);
    return 0;
}