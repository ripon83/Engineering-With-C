/*
 * Program: Pointer To Const 8
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

% #include <stdio.h>

% int main()
% {
%     int x = 10, y = 20;
%     const int *const ptr = &x;

%     printf("%d\t", *ptr);

%     *ptr = 20;      // Error
%     ptr = &y;       // Error

%     return 0;
% }
%
