#include<stdio.h>
int main()
{
	FILE *fp=fopen("myfile.txt","w+");
	fprintf(fp,"Time is money, save it.");
	fseek(fp,0,SEEK_SET);
	fprintf(fp,"but we love to waste it.");
	fclose(fp);
	return 0;	
}