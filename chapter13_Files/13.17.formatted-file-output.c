/*
 * Program: Formatted File Output
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("myfile.txt", "w");  // Open the file with the specified mode
    int n = 5, i, j, c;
    for(i=1; i<=n; i++) {
        for(j=i; j<=n; j++)
            fprintf(fp, "  ");  // Write formatted data to the file
        c=1;
        for(j=1; j<=i; j++) 
        {
            fprintf(fp, "%d   ", c);  // Write formatted data to the file
            c=c*(i-j)/j;
        }
        fprintf(fp, "\n");  // Write formatted data to the file
    }
    //creating the mirror image of the above code
    for(i=n-1; i>0; i--) {
        for(j=i; j<=n; j++)
            fprintf(fp,"  ");  // Write formatted data to the file
        c=1;
        for(j=1; j<=i; j++) 
        {
            fprintf(fp,"%d   ", c);  // Write formatted data to the file
            c=c*(i-j)/j;
        }
        fprintf(fp,"\n");  // Write formatted data to the file
    }
    fclose(fp);  // Close the file
    return 0;  // Indicate successful program termination
}
