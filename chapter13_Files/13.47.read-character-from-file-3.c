/*
 * Program: Read Character From File 3
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()   // Main function: program execution starts here
{
    char ch;
    int characters=0, words=0, sentences=0, lines=1;
    FILE *fp = fopen("input.txt", "r");  // Open the file with the specified mode
    while ((ch = fgetc(fp)) != EOF)   // Read a character from the file
    {
        characters++;
        if(ch == '\n')
            lines++;
        if(ch==' ' || ch=='\n' || ch=='\t')
            words++;
        if(ch=='.' || ch=='!' || ch=='?')
            sentences++;
    }
    printf("Number of characters: %d\n", characters);  // Display output
    printf("Number of words: %d\n", words);  // Display output
    printf("Number of sentences: %d\n", sentences);  // Display output
    printf("Number of lines: %d\n", lines);  // Display output
    fclose(fp);  // Close the file
    return 0;  // Indicate successful program termination
}
