#include <stdio.h>
#include "pass.h"

int main()
{
	char fname[100]="bdfg",sname[100]="Patgiri",*pass,choice[10];
	int dd,mm,yy,pin,ch;

	printf("Enter your first name:");
	scanf("%s",fname);
	printf("Enter your surname:");
	scanf("%s",sname);
	printf("Enter your year of birth (yyyy):");
	scanf("%d",&yy);
	printf("Enter your month of birth (mm):");
	scanf("%d",&mm);
	printf("Enter your date of birth (dd):");
	scanf("%d",&dd);
	printf("Enter your postal code:");
	scanf("%d",&pin);
	
	printf("Your ceredentials are given below:\nFName: %s \t SName: %s\nDD: %d\tMM:%d\tYY:%d\tPIN:%d\n",fname,sname,dd,mm,yy,pin);
	do{
		pass=(char *)malloc(100);
		printf("\n1. Easy\n2. Medium\n3. Hard\n");
	    printf("Chose the level of password suggester:");
	    scanf("%d",&ch);
		if(ch==1)
		{
		    if(genPassEasy(fname,sname,dd,mm,yy,pin,pass))
			    printf("\nYour password is: %s\n",pass);
		    else
			    printf("Unable to generate password!\n");
		}
		else if(ch==2)
		{
		    if(genPassMedium(fname,sname,dd,mm,yy,pin,pass))
			    printf("\nYour password is: %s\n",pass);
		    else
			    printf("Unable to generate password!\n");
		}
		else
		{
		    if(genPassHard(fname,sname,dd,mm,yy,pin,pass))
			    printf("\nYour password is: %s\n",pass);
		    else
			    printf("Unable to generate password!\n");
		}
		printf("Do you want to regenerate the password (Yes/No)?");
		scanf("%s",choice);
		free(pass);
	}while(compare(choice,"Yes")==0||compare(choice,"YES")==0||compare(choice,"yes")==0);
	return 0;
}