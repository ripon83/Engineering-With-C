/*
 * Program: Fseek File Pointer 14
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()   // Main function: program execution starts here
{
    FILE *fp = fopen("input.txt", "r");  // Open the file with the specified mode
    fseek(fp, 0, SEEK_END);  // Reposition the file pointer
    long p=ftell(fp);  // Obtain the current file-pointer position
    int k=3, line=0;
    char ch;
    while(p)
    {
        fseek(fp, --p, SEEK_SET);  // Reposition the file pointer
        if((ch=fgetc(fp))=='\n')  // Read a character from the file
        {
            line++;
            if(line==k)
                break;
        }    
    }
    if(p==0)
        fseek(fp, 0, SEEK_SET);  // Reposition the file pointer
    while((ch=fgetc(fp))!=EOF)  // Read a character from the file
        printf("%c", ch);  // Display output
    fclose(fp);  // Close the file
    return 0;  // Indicate successful program termination
}
