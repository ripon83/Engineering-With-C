/*
 * Program: Combining Multiple Operators Increment Pincrement
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

% #include <stdio.h>
% int main()
% {
%     int arr[6]={10, 20, 30, 40, 50, 60};  // Store a value in an array element
%     int i, *p=arr; 
%     ++*p++;
%     printf("%d\n", *p);
%     for(i=0; i<6; i++)
%         printf("%d\t", arr[i]);
%     return 0;
% }
%
