/*
 * Program: Fseek File Pointer 24
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("Students.txt", "w+");  // Open the file with the specified mode
    int n=20, m=5;
    Student st[n];
    populate(st, n, m);
    save(fp, st, n, m);
    fseek(fp, 0, SEEK_SET);      // REQUIRED before reading
    print(fp, st, n, m);
    fclose(fp);  // Close the file
    return 0;  // Indicate successful program termination
}
