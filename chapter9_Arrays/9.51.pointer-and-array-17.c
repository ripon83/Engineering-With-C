/*
 * Program: Pointer And Array 17
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

% #include <stdio.h>
% int main()
% {
%     int arr[6]={10, 20, 30, 40, 50, 60};  // Store a value in an array element
%     int i, *p=arr; 
%     p=p+2;
%     printf("%d\n", *p);
%     return 0;
% }
%
