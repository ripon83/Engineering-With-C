/*
 * Program: Constant Pointer 3
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

% #include <stdio.h>

% int main()
% {
%     int x = 10;
%     int *const ptr = &x;

%     printf("%d\t", *ptr);

%     *ptr = 20;

%     printf("%d", x);

%     return 0;
% }
%
