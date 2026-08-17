/*
 * Program: Formatted File Output 2
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("myfile.txt", "w");  // Open the file with the specified mode
    int i, j, n=5;
    for(i=1; i<=n; i++)
    {
        for(j=n-i; j>=0; j--)    //white space
            fprintf(fp, "\t");  // Write formatted data to the file
        for(j=1; j<=i; j++)      //print increasing order
            fprintf(fp, "%d\t", j);  // Write formatted data to the file
        for(j=i-1; j>=1; j--)    //print decreasing order
            fprintf(fp, "%d\t", j);  // Write formatted data to the file
        fprintf(fp, "\n");          //print newline after each row    
    }
    for(i=n-1; i>=1; i--)         //Just opposite of the above loops
    {
        for(j=n-i; j>=0; j--)    
            fprintf(fp, "\t");  // Write formatted data to the file
        for(j=1; j<=i; j++)     
            fprintf(fp, "%d\t", j);  // Write formatted data to the file
        for(j=i-1; j>=1; j--)    
            fprintf(fp, "%d\t", j);  // Write formatted data to the file
        fprintf(fp, "\n");           // Write formatted data to the file
    }
    fclose(fp);  // Close the file
    return 0;  // Indicate successful program termination
}
