/*
 * Program: Constant Pointer 4
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

% #include <stdio.h>

% int main()
% {
%     int x = 10, y = 20;
%     int *const ptr = &x;

%     printf("%d\t", *ptr);

%     ptr = &y;       // Error

%     printf("%d", *ptr);

%     return 0;
% }
%
