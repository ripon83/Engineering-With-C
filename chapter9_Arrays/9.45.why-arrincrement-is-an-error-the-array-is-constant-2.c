/*
 * Program: Why Arrincrement Is An Error The Array Is Constant 2
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

% #include <stdio.h>
% int main()
% {
%     int arr[5]={1, 2, 3, 4, 5};  // Store a value in an array element
%     arr++;   //Error
%     printf("%d\n", arr[0]);
%     return 0;
% }
%
