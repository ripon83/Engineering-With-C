/**************************************
Pattern to display the following-
     * 
    * * 
   * * * 
  * * * * 
 * * * * * 
* * * * * *

********************************************/
#include <stdio.h>
int main()
{
    int n = 6,i,j;
    for(i = 1; i<=n; i++)       //number rows
    {
        for (j=i; j<n; j++)     //White space
        {
            printf(" "); 
        }
        for(j=1;j<=i;j++)       //Print the columns
            printf("* ");
        printf("\n");           //Print newline after each row
    }
    return 0;
}