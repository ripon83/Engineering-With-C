#include<stdio.h>
int main()
{
	FILE *fp=fopen(__FILE__,"a");
	fprintf(fp,"\n//Comments are added to understand the program\n");
	fclose(fp);
	return 0;
}

//Comments are added to understand the program
