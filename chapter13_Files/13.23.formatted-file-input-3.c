/*
 * Program: Formatted File Input 3
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("records.txt", "r");  // Open the file with the specified mode
    char name[50];
    int age;
    float marks;
    while(fscanf(fp, "%s %d %f", name, &age, &marks)==3)
        printf("Name: %s, Age: %d, Marks: %.2f\n", name, age, marks);  // Display output
    fclose(fp);  // Close the file
    return 0;  // Indicate successful program termination
}
