/*
 * Program: Read Line From File 8
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
#include <string.h>
void compare(FILE *fp1, FILE *fp2)
{
    char *p1=NULL, *p2=NULL;
    char s1[200], s2[200];
    int line=1, diff=0;
    while(1)
    {
        p1=fgets(s1, sizeof(s1), fp1);  // Read a line/string from the file
        p2=fgets(s2, sizeof(s2), fp2);  // Read a line/string from the file
        if(p1==NULL && p2==NULL)
            break;
        if(p1==NULL || p2==NULL || strcmp(s1, s2)!=0)
        {
            
            if(p1==NULL)
                printf("Difference in the line number %d at File2\n", line);  // Display output
            else
            if(p2==NULL)
                printf("Difference in the line number %d at File1\n", line);  // Display output
            else
                printf("Difference found at line number %d\n", line);  // Display output
            diff=1;
        }
        line++;
    }
    if(!diff)
        printf("No difference!");  // Display output
}
int main()  // Main function: program execution starts here
{
    FILE *fp1=fopen("file1.txt", "r");  // Open the file with the specified mode
    FILE *fp2=fopen("file2.txt", "r");  // Open the file with the specified mode
    
    compare(fp1, fp2);
    return 0;  // Indicate successful program termination
}
