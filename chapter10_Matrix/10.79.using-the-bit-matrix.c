/*
 * Program: Using The Bit Matrix
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

int main()  // Main function: execution starts here
{
    int m=10, n=12;                      //Dimensions of the bit matrix
    int *bitMatrix=allocate(r, c);       //Allocate the bit matrix
    populate(bitMatrix, r, c);            //Automatically and randomly populate the bit matrix
    printf("\n\n");  // Display output
    show(bitMatrix, r, c);                //Display the bit matrix
    
    reset(bitMatrix, 2, 3, c);             //Reset the bit position 2 and 3, i.e., bitMatrix[2][3]=0
    
    printf("\n\nAfter resetting, the matrix is:\n");  // Display output
    show(bitMatrix, r, c);                //Display the bit matrix after resetting
    
    return 0;  // Indicate successful program termination
}
