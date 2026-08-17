/*
 * Program: Complete Program
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

int main()  // Main function: execution starts here
{
    //The mat[][] is a matrix that needs to be encrypted.
    //Usually, the mat[][] is an image.
    int mat[4][4]={{4,7,5,1}, {8,4,2,3}, {4,1,2,5}, {1,2,3,4}};
    int k1[4][4]={{8,8,2,2}, {1,7,6,5}, {9,4,1,3}, {4,1,3,2}};     //Secret key k1[][]
    int k2[4][4]={{2,7,2,3}, {1,9,4,3}, {5,3,2,8}, {6,0,1,3}};     //Secret key k2[][]
    int r=4, c=4, cipher[10][10];
    printf("\nThe matrix is:\n");  // Display output
    show(r, c, mat);                        //Displaying the mat[][]
    
    printf("\nThe key 1 is:\n");  // Display output
    show(r, c, k1);                         //Displaying the secret key k1[][]
    
    printf("\nThe key 2 is:\n");  // Display output
    show(r, c, k2);                         //Displaying the secret key k2[][]
    
    encryption(r, c, mat, k1, k2, cipher);   //Encrypting the matrix mat[][]
    printf("\nThe resultant matrix after encryption is:\n");  // Display output
    show(r, c, cipher);                     //Displaying the encrypted matrix
    
    decryption(r, c, cipher, k1, k2);       //Decryption the cipher[][]
    printf("\nThe resultant matrix after decryption is:\n");  // Display output
    show(r, c, cipher);                     //Displaying the decrypted matrix
    return 0;  // Indicate successful program termination
}
