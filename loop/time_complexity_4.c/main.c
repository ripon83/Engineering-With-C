#include <stdio.h>
int main()
{
    long i, j, counter=0, n=1024;
    //Time complexity is O(logn)
    for(i=n;i>=1;i=i/2)
    {
        counter++;      //counter=counter+1
    }    
    printf("The body of the loop is executed %ld times\n",counter);
    return 0;
}