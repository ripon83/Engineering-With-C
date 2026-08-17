/*
 * Program: Bit Matrix 2
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

% int main()
% {
%     int r=10, c=12;                      //Dimensions of the bit matrix
%     int *bitMatrix=allocate(r, c);       //Allocate the bit matrix
    
%     set(bitMatrix, 1, 2, c);              //Equivalent to bitMatrix[1][2]=1
%     set(bitMatrix, 4, 3, c);              //Equivalent to bitMatrix[4][3]=1
%     set(bitMatrix, 9, 5, c);              //Equivalent to bitMatrix[9][5]=1
%     set(bitMatrix, 8, 9, c);              //Equivalent to bitMatrix[8][9]=1
    
%     printf("\n\n");
%     show(bitMatrix, r, c);                //Display the bit matrix
    
%     reset(bitMatrix, 1, 2, c);             //Equivalent to bitMatrix[1][2]=0
    
%     printf("\n\nAfter resetting, the matrix is:\n");
%     show(bitMatrix, r, c);                //Display the matrix after resetting
    
%     return 0;
% }
%
