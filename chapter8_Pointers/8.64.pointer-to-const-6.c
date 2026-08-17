/*
 * Program: Pointer To Const 6
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

% #include <stdio.h>

% int main()
% {
%     int x = 10;
%     const int *ptr = &x;

%     printf("%d\t", *ptr);

%     *ptr = 20;      // Error

%     printf("%d", *ptr);

%     return 0;
% }
%
