/*
 * Program: Validating The Complete Sudoku
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

int main()  // Main function: execution starts here
{
    int sudoku[9][9]={
        {1,2,3,4,5,6,7,8,9},
        {7,8,9,1,2,3,4,5,6},
        {4,5,6,7,8,9,1,2,3},
        {3,1,2,8,4,5,9,6,7},
        {6,9,7,3,1,2,8,4,5},
        {8,4,5,6,9,7,3,1,2},
        {2,3,1,5,7,4,6,9,8},
        {9,6,8,2,3,1,5,7,4},
        {5,7,4,9,6,8,2,3,1}
    };

    check(sudoku);
    return 0;  // Indicate successful program termination
}
