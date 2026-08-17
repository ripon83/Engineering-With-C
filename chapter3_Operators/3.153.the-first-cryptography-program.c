/*
 * Program: The First Cryptography Program
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include<stdio.h>
int main()  // Main function: program execution starts here
{
    int m=71234, key=5678910, cipher, msg;
    printf("The message to be sent is: %d\n",m);  // Display output
    
    cipher=m^key; //Encryption
    printf("The encrypted message is: %d\n",cipher);  // Display output
    printf("The encrypted message is sent to the receiver\n");  // Display output
    
    msg=cipher^key; //Decryption
    printf("The message is received and decrypted\n");  // Display output
    printf("The decrypted message is: %d\n",msg);  // Display output
    return 0;  // Indicate successful program termination
}
