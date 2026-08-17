/*
 * Program: Generating The Hints
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

int main()  // Main function: execution starts here
{
    int mat[1024];
    int r=32, c=16;

    _init_(mat, r, c);

    int k=r*c/4;

    populate(mat, r, c, k);
    show(mat, r, c);

    printf("\nGenerating hints:\n");  // Display output

    Hints(mat, r, c);
    show(mat, r, c);

    return 0;  // Indicate successful program termination
}
