/*********************************************
 * Displays the following Pascal triangle-
            1   
          1   1   
        1   2   1   
      1   3   3   1   
    1   4   6   4   1   
  1   5   10   10   5   1
 *********************************************/

#include <stdio.h>
int main()
{
    int n = 6,i,j,c;
    for(i = 1; i <= n; i++) 
    {
        for(j=0; j<=n - i; j++) 
        {
            printf("  "); 
        }
        c=1; // coefficient
        for(j=1; j<=i; j++) 
        {
            printf("%d   ", c);
            c=c*(i-j)/j;
        }
        printf("\n");
    }
    return 0;
}