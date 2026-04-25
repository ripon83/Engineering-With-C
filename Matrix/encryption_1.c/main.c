#include <stdio.h>
void show(int m, int n, int mat[m][n])  //Displays the matrix
{
    for(int i=0;i<m;i++)                //Iterates the rows
    {
        for(int j=0;j<n;j++)            //Iterates the columns
            printf("%d\t",mat[i][j]);   //Prints the matrix items
        printf("\n");                   //Prints a newline after each row
    }
}

//Mixing the matrix with a secret key
void encrypt(int r, int c, int mat[r][c], int key[r][c], int cipher[r][c])
{
    for(int i=0;i<r;i++)                        //Iterates the rows
        for(int j=0;j<c;j++)                    //Iterates the column
            cipher[i][j]=mat[i][j]^key[i][j];   //Xoring the mat[][] and key[][]
}

//Decoding or deciphering the matrix using a secret key
void decrypt(int r, int c, int cipher[r][c], int key[r][c])
{
    for(int i=0;i<r;i++)                            //Iterates the rows
        for(int j=0;j<c;j++)                        //Iterates the columns
            cipher[i][j]=cipher[i][j]^key[i][j];    //Decrypting the cipher[][] using key[][]
}

//Transposing the matrix, i.e., rows become columns and columns become rows 
void transpose(int r, int c, int mat[r][c])
{
    int tmp[c][r];
    for(int i=0;i<r;i++)            //Iterating entire rows
        for(int j=0;j<c;j++)        //Iterating entire columns
            tmp[i][j]=mat[j][i];    //Transposing
    for(int i=0;i<r;i++)            //Iterating entire rows
        for(int j=0;j<c;j++)        //Iterating entire rows
            mat[i][j]=tmp[i][j];    //Copy back the transposed matrix
}

//Encrypting the matrix using key k1[][] and k2[][].
void encryption(int r, int c, int mat[r][c], int k1[r][c], int k2[r][c], int cipher[r][c])
{
    encrypt(r, c, mat, k1, cipher);     //Xoring the mat[][] with k1[][]
    transpose(r, c, cipher);            //Transposes the resultant matrix
    encrypt(r, c, cipher, k2, cipher);  //Xoring the cipher[][] with k2[][]
}

//Decrypting the cipher[][] using k1[][] and k2[][]
void decryption(int r, int c, int cipher[r][c], int k1[r][c], int k2[r][c])
{
    decrypt(r, c, cipher, k2);      //Xoring the cipher[][] with k2[][]
    transpose(r, c, cipher);        //Transposing the cipher[][]
    decrypt(r, c, cipher, k1);      //Xoring the cipher[][] with k1[][]
}


int main()
{
    //The mat[][] is a matrix that needs to be encrypted.
    //Usually, the mat[][] is an image.
    int mat[4][4]={{4,7,5,1},{8,4,2,3},{4,1,2,5},{1,2,3,4}};
    int k1[4][4]={{8,8,2,2},{1,7,6,5},{9,4,1,3},{4,1,3,2}};     //Secret key k1[][]
    int k2[4][4]={{2,7,2,3},{1,9,4,3},{5,3,2,8},{6,0,1,3}};     //Secret key k2[][]
    int r=4, c=4, cipher[10][10];
    printf("\nThe matrix is:\n");
    show(r, c, mat);                        //Displaying the mat[][]
    
    printf("\nThe key 1 is:\n");
    show(r, c, k1);                         //Displaying the secret key k1[][]
    
    printf("\nThe key 2 is:\n");
    show(r, c, k2);                         //Displaying the secret key k2[][]
    
    encryption(r, c, mat, k1, k2, cipher);   //Encrypting the matrix mat[][]
    printf("\nThe resultant matrix after encryption is:\n");
    show(r, c, cipher);                     //Displaying the encrypted matrix
    
    decryption(r, c, cipher, k1, k2);       //Decryption the cipher[][]
    printf("\nThe resultant matrix after decryption is:\n");
    show(r, c, cipher);                     //Displaying the decrypted matrix
    return 0;
}