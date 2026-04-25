#include <stdio.h>
void show(int mat[], int r, int c)  //Displays the matrix
{
    for(int i=0;i<r;i++)                //Iterates the rows
    {
        for(int j=0;j<c;j++)            //Iterates the columns
            printf("%d\t",mat[i*c+j]);   //Prints the matrix items
        printf("\n");                   //Prints a newline after each row
    }
}

//Mixing the matrix with a secret key
void encrypt(int mat[], int key[], int cipher[], int r, int c)
{
    for(int i=0;i<r;i++)                        //Iterates the rows
        for(int j=0;j<c;j++)                    //Iterates the column
            cipher[i*c+j]=mat[i*c+j]^key[i*c+j];   //Xoring the mat[][] and key[][]
}

//Decoding or deciphering the matrix using a secret key
void decrypt(int cipher[], int key[], int r, int c)
{
    for(int i=0;i<r;i++)                            //Iterates the rows
        for(int j=0;j<c;j++)                        //Iterates the columns
            cipher[i*c+j]=cipher[i*c+j]^key[i*c+j];    //Decrypting the cipher[][] using key[][]
}

//Transposing the matrix, i.e., rows become columns and columns become rows 
void transpose(int mat[], int r, int c)
{
    int tmp[c*r];
    for(int i=0;i<r;i++)            //Iterating entire rows
        for(int j=0;j<c;j++)        //Iterating entire columns
            tmp[i*c+j]=mat[j*c+i];    //Transposing
    for(int i=0;i<r;i++)            //Iterating entire rows
        for(int j=0;j<c;j++)        //Iterating entire rows
            mat[i*c+j]=tmp[i*c+j];    //Copy back the transposed matrix
}

//Encrypting the matrix using key k1[][] and k2[][].
void encryption(int mat[], int k1[], int k2[], int cipher[], int r, int c)
{
    encrypt(mat, k1, cipher, r, c);     //Xoring the mat[][] with k1[][]
    transpose(cipher, r, c);            //Transposes the resultant matrix
    encrypt(cipher, k2, cipher, r, c);  //Xoring the cipher[][] with k2[][]
}

//Decrypting the cipher[][] using k1[][] and k2[][]
void decryption(int cipher[], int k1[], int k2[], int r, int c)
{
    decrypt(cipher, k2, r, c);      //Xoring the cipher[][] with k2[][]
    transpose(cipher, r, c);        //Transposing the cipher[][]
    decrypt(cipher, k1, r, c);      //Xoring the cipher[][] with k1[][]
}


int main()
{
    //The mat[][] is a matrix that needs to be encrypted.
    //Usually, the mat[][] is an image.
    int mat[]={4,7,5,1,8,4,2,3,4,1,2,5,1,2,3,4};
    int k1[]={8,8,2,2,1,7,6,5,9,4,1,3,4,1,3,2};     //Secret key k1[][]
    int k2[]={2,7,2,3,1,9,4,3,5,3,2,8,6,0,1,3};     //Secret key k2[][]
    int r=4, c=4, cipher[100];
    printf("\nThe matrix is:\n");
    show(mat, r, c);                        //Displaying the mat[][]
    
    printf("\nThe key 1 is:\n");
    show(k1, r, c);                         //Displaying the secret key k1[][]
    
    printf("\nThe key 2 is:\n");
    show(k2, r, c);                         //Displaying the secret key k2[][]
    
    encryption(mat, k1, k2, cipher, r, c);   //Encrypting the matrix mat[][]
    printf("\nThe resultant matrix after encryption is:\n");
    show(cipher, r, c);                     //Displaying the encrypted matrix
    
    decryption(cipher, k1, k2, r, c);       //Decryption the cipher[][]
    printf("\nThe resultant matrix after decryption is:\n");
    show(cipher, r, c);                     //Displaying the decrypted matrix
    return 0;
}