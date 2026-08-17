/*
 * Program: Fseek File Pointer 18
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
void append(char *str, int *n, char *word, char ch)
{
    for(int i=0; word[i]!='\0'; i++)
        str[(*n)++]=word[i];
    str[(*n)++]=ch;
}
void replace(FILE *fp, char *old_word, char *new_word)
{
    char word[100], ch;
    int i=0, k=0;
    fseek(fp, 0, SEEK_END);  // Reposition the file pointer
    long m=ftell(fp);  // Obtain the current file-pointer position
    char *data=(char *)malloc(m+strlen(new_word)+10);
    fseek(fp, 0, SEEK_SET);  // Reposition the file pointer
    while((ch=fgetc(fp))!=EOF)  // Read a character from the file
    {
        if(ch==' ' || ch=='\n' || ch=='\t')
        {
            word[k]='\0';
            if(strcmp(word, old_word)==0)
                append(data, &i, new_word, ch);
            else
                append(data, &i, word, ch);
            k=0;
        }
        else
            word[k++]=ch;
    }
    data[i+1]='\0';
    fseek(fp, 0, SEEK_SET);  // Reposition the file pointer
    ftruncate(fileno(fp), 0);
    fprintf(fp, "%s", data);  // Write formatted data to the file
    fclose(fp);  // Close the file
    free(data);
}
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("input.txt", "r+");  // Open the file with the specified mode
    char old_word[100], new_word[100];
    printf("Enter the word to be replaced:");  // Display output
    scanf("%s", old_word);  // Read input from the user
    printf("Enter the new word:");  // Display output
    scanf("%s", new_word);  // Read input from the user
    replace(fp, old_word, new_word);
    return 0;  // Indicate successful program termination
}
