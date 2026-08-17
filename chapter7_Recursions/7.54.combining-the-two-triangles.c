/*
 * Program: Combining The Two Triangles
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

void pascal(int n)
{
    pascal_top(n);  // Function call
    pascal_bottom(n-1);  // Function call
}

int main()  // Main function: execution starts here
{
    pascal(5);  // Function call
    return 0;  // Indicate successful program termination
}
