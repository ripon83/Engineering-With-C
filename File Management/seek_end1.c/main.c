#include<stdio.h>
int main()
{
	FILE *fp=fopen("myfile.txt","w+");
	fprintf(fp,"The change is the only constant. Nothing is permanent, neither happiness nor sadness.");
	fseek(fp,-52,SEEK_END);
	fprintf(fp,"So, learn from your mistakes and change yourself for betterment.");
	fclose(fp);
	return 0;	
}