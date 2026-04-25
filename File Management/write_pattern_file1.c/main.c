#include <stdio.h>
int main()
{
    FILE *fp=fopen("myfile.txt","w");
    int n = 5,i,j,c;
    for (i = 1; i <= n; i++) {
        for(j=i; j<=n; j++)
            fprintf(fp,"  ");
        c=1;
        for (j=1; j<=i; j++) 
        {
            fprintf(fp,"%d   ", c);
            c=c*(i-j)/j;
        }
        fprintf(fp,"\n");
    }
    //creating the mirror image of the above code
    for (i = n-1; i>0; i--) {
        for(j=i; j<=n; j++)
            fprintf(fp,"  ");
        c=1;
        for (j=1; j<=i; j++) 
        {
            fprintf(fp,"%d   ", c);
            c=c*(i-j)/j;
        }
        fprintf(fp,"\n");
    }
    fclose(fp);
    return 0;
}