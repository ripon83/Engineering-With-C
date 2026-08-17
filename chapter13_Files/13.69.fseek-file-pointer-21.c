/*
 * Program: Fseek File Pointer 21
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
void encrypt(FILE *fp, FILE *out, int key)
{
    char ch;
    int i=0;
    while((ch=fgetc(fp))!=EOF)  // Read a character from the file
    {
        fputc((ch^key)^(i%100), out);  // Write a character to the file
        i++;
    }
}
void decrypt(FILE *out, int key)
{
    char ch;
    int i=0;
    fseek(out, 0, SEEK_SET);  // Reposition the file pointer
    while((ch=fgetc(out))!=EOF)  // Read a character from the file
    {
        printf("%c", (ch^key)^(i%100));  // Display output
        i++;
    }
}
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("input.txt", "r");  // Open the file with the specified mode
    FILE *out=fopen("output.txt", "w+");  // Open the file with the specified mode
    int key=65;
    encrypt(fp, out, key);
    decrypt(out, key);
    fclose(fp);  // Close the file
    fclose(out);  // Close the file
    return 0;  // Indicate successful program termination
}
