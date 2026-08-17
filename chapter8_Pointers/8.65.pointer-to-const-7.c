/*
 * Program: Pointer To Const 7
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

% #include <stdio.h>

% int main()
% {
%     int x = 10;
%     const int *const ptr = &x;

%     printf("%d", *ptr);

%     return 0;
% }
%
