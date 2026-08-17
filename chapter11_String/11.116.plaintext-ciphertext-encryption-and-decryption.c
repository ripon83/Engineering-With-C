/*
 * Program: Plaintext Ciphertext Encryption And Decryption
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encrypt(char plaintext[], int key, char cipher[])
{
    char ch;
    int i;

    for(i=0; plaintext[i]!='\0'; i++)  // Repeat over the required characters
    {
        ch=plaintext[i];

        if(isalpha(ch))
        {
            char base=isupper(ch)?'A':'a';
            ch=(ch-base+key)%26+base;
        }

        cipher[i]=ch;
    }

    cipher[i]='\0';
}

void decrypt(char cipher[], int key, char plaintext[])
{
    char ch;
    int i;

    for(i=0; cipher[i]!='\0'; i++)  // Repeat over the required characters
    {
        ch=cipher[i];

        if(isalpha(ch))
        {
            char base=isupper(ch)?'A':'a';
            ch=(ch-base-key+26)%26+base;
        }

        plaintext[i]=ch;
    }

    plaintext[i]='\0';
}

int main()  // Main function: program execution starts here
{
    char msg[1024], cipher[1024], plaintext[1024];
    int key=7;

    printf("Enter the message: ");  // Display output
    scanf("%[^\n]s", msg);  // Read input

    encrypt(msg,key,cipher);
    printf("The ciphertext is: %s\n", cipher);  // Display output

    decrypt(cipher,key,plaintext);
    printf("The decrypted message is: %s", plaintext);  // Display output

    return 0;  // Indicate successful program termination
}
