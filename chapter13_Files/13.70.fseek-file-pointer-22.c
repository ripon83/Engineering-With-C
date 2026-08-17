/*
 * Program: Fseek File Pointer 22
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
void encrypt(FILE *fp, FILE *out, char *key)
{
    char ch;
    int i=0;
    while((ch=fgetc(fp))!=EOF)  // Read a character from the file
    {
        fputc((ch^key[i])^(i%100), out);  // Write a character to the file
        i++;
        if(i==128)
            i=0;
    }
}
void decrypt(FILE *out, char *key)
{
    char ch;
    int i=0;
    fseek(out, 0, SEEK_SET);  // Reposition the file pointer
    while((ch=fgetc(out))!=EOF)  // Read a character from the file
    {
        printf("%c", (ch^key[i])^(i%100));  // Display output
        i++;
        if(i==128)
            i=0;
    }
}
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("input.txt", "r");  // Open the file with the specified mode
    FILE *out=fopen("output.txt", "w+");  // Open the file with the specified mode
    int key=65;
    char key[]="5305aff5de5c093c9a6e458f05b25dcfaded1e0bfbd824f6babf2 bae8b5dbf98b132b350eb9aaa2429035bb27888cb7509b91edcec3e7fffe4500370b45330ad";
    encrypt(fp, out, key);
    decrypt(out, key);
    fclose(fp);  // Close the file
    fclose(out);  // Close the file
    return 0;  // Indicate successful program termination
}
