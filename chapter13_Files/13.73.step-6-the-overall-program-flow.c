/*
 * Program: Step 6 The Overall Program Flow
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("dictionary.txt", "r");  // Open the file with the specified mode
    int n=counter(fp);
    dictionary *d=create(n+1);
    run(fp, d);
    return 0;  // Indicate successful program termination
}
