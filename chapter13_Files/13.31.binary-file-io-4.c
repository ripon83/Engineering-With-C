/*
 * Program: Binary File Io 4
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

% #include <stdio.h>
% int main()
% {
%     FILE *fp=fopen("myfile.txt", "r");  // Open the file with the specified mode
%     char buff[100];
%     while (fread(buff, 1, 1, fp) > 0){
%         printf("%s", buff);
%     }
%     fclose(fp);
%     return 0;
% }
%
