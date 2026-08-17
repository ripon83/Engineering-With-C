/*
 * Program: Pointer And Array 13
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

% #include <stdio.h>
% int main()
% {
%     int a[5]={1, 2, 3, 4, 5};  // Store a value in an array element
%     int *p=a;
%     for(int i=0; i<5; i++)
%         printf("%d\t", *p++);
%     return 0;
% }
%
