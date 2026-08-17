/*
 * Program: Pointer And Array 15
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

% #include <stdio.h>
% int main()
% {
%     int a[5]={10, 20, 30, 40, 50};  // Store a value in an array element
%     int *p=a;
%     for(int i=0; i<5; i++)
%         printf("%d\t", *p+i);
%     return 0;
% }
%
