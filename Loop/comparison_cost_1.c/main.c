/************************************************************************
 *      Total Comparison= Total cost of outer loop * Total cost of Inner loop + Total cost of outer loop
 *      Total Comparison=m*n+m 
 *      If m=10, n=10000, the Total Comparison=10*10000+10=100010
 *      If m=10000, n=10, the Total Comparison=10000*10+10000=110000 
 * 
 * ***********************************************************************/

#include <stdio.h>
int main()
{
    int i,j,c1=0,c2=0,c3=0,c4=0; // The counters c1, c2, c3, and c4 are set to zero.
    int m=10, n=10000;
    for(i=0;i<m;i++,c1++)
    {
        for(j=0;j<n;j++,c1++)
        {
            c2++;
        }
    }
    printf("Comparison counter1=%d  Within the body counter2=%d\n",c1,c2);

    m=10000;
    n=10;
    for(i=0;i<m;i++,c3++)
    {
        for(j=0;j<n;j++,c3++)
        {
            c4++;
        }
    }
    printf("Comparison counter3=%d Within the body counter4=%d\n",c3,c4);
    return 0;
}