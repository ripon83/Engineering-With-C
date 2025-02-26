/**********************************************
 * Displays the following Pascal Triangle-
            1   
          1   1   
        1   2   1   
      1   3   3   1   
    1   4   6   4   1   
  1   5   10   10   5   1   
    1   4   6   4   1   
      1   3   3   1   
        1   2   1   
          1   1   
            1
**********************************************/

#include <stdio.h>
int main()
{
    int n = 6,i,j,c;
    for (i = 1; i <= n; i++) {
        for(j=i; j<=n; j++)
            printf("  ");
        c=1;
        for (j=1; j<=i; j++) 
        {
            printf("%d   ", c);
            c=c*(i-j)/j;
        }
        printf("\n");
    }
    //creating the mirror image of the above code
    for (i = n-1; i>0; i--) {
        for(j=i; j<=n; j++)
            printf("  ");
        c=1;
        for (j=1; j<=i; j++) 
        {
            printf("%d   ", c);
            c=c*(i-j)/j;
        }
        printf("\n");
    }
    return 0;
}