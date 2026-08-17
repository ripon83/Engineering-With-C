/*
 * Program: Recursive Pattern 2
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

% #include <stdio.h>
% void pattern(int n)
% {
%     int i;
%     for(i=1; i<=n; i++)
%         printf("%d\t", i);  // Function call
%     printf("\n");  // Function call
%     if(n>=1)
%         pattern(n-1);      // Function call
% }
% int main()
% {
%     pattern(5);  // Function call
%     return 0;
% }
%
