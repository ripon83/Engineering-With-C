#include <stdio.h>
int main()
{
    FILE *fp=fopen("myfile.txt","w");
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=n-i; j>=0; j--)    //white space
            fprintf(fp,"\t");
        for(j=1; j<=i; j++)      //print increasing order
            fprintf(fp,"%d\t",j);
        for(j=i-1; j>=1; j--)    //print decreasing order
            fprintf(fp,"%d\t",j);
        fprintf(fp,"\n");          //print newline after each row    
    }
    for(i=n-1;i>=1;i--)         //Just opposite of the above loops
    {
        for(j=n-i; j>=0; j--)    
            fprintf(fp,"\t");
        for(j=1; j<=i; j++)     
            fprintf(fp,"%d\t",j);
        for(j=i-1; j>=1; j--)    
            fprintf(fp,"%d\t",j);
        fprintf(fp,"\n");         
    }
    fclose(fp);
    return 0;
}