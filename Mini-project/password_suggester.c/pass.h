#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"
#include "libstr.h"


char selects(char str[])
{
	int n=trng32_ach()%3;
	if(n==0)
	{
		if(!contains(str,'@'))
			return '@';
		else
		if(!contains(str,'#'))
			return '#';
		else
		if(!contains(str,':'))
			return ':';
		else
			return '-';
	}
	else
	if(n==1)
	{
		
		if(!contains(str,'#'))
			return '#';
		else
		if(!contains(str,'@'))
			return '@';
		else
		if(!contains(str,':'))
			return ':';
		else
			return '-';
	}
	else
	{
		
		if(!contains(str,':'))
			return ':';
		else
		if(!contains(str,'@'))
			return '@';
		else
		if(!contains(str,'#'))
			return '#';
		else
		if(!contains(str,'-'))
			return '-';
		else
			return ',';
	}
}
	


char *num2symb(int n)
{
	int tmp=n,i=0,r,rev=0,k=0;
	static char buff[10],digit[20];
	printf("We are replacing %d by symbols as follows:\n",n);
	while(tmp)
	{
		r=tmp%10;
		digit[k++]=(char)r;
		tmp=tmp/10;
	}
	while(k>0)
	{
		r=digit[--k];
		printf("%d is replaced by %c\n",r,digitToSymb(r));
		buff[i++]=digitToSymb(r);
	}
		
	buff[i]='\0';
	return buff;				
}


void threeAlpha(char str[], int k, int n)
{
	int f1=0,f2=0,f3=0;
	for(int i=k;i<n-3;i++)
	{
		if(!vowel(str[i]) && vowel(str[i+1]) && !vowel(str[i+2]))
		{
			if(str[i]>=97&&str[i]<=122)			
				str[i]=str[i]-32;
			if(str[i+1]>=97&&str[i+1]<=122)			
				str[i+1]=str[i+1]-32;
			if(str[i+2]>=97&&str[i+2]<=122)			
				str[i+2]=str[i+2]-32;
			return;
		}
	}
}

int replaceCharBySymb(char str[])
{
	int i,j=0,n,k,flag=0,counter=0;
	n=length(str);
	for(i=0; str[i]!='\0' && counter<=2; i++)
	{
		char *ptr=symbols(str[i]);
		if((ptr!=NULL)&&(trng32_ach()&1))
		{
			printf("%c is replaced by %s\n",str[i],ptr);
			shift(str,i,n);
			n--;
			k=i;
			while(ptr[j]!='\0')
			{
				insertCharAt(str,n++,ptr[j++],k++);
				flag=1;
			}
			j=0;
			counter++;
		}
	}
	if(flag==0)
	{
		if(n>4)
		{
			int k=trng32_ach()%(n-3);
			threeAlpha(str,k,n);
		}
	}
	return flag;
}


void update(char str[])
{
	int n=length(str),i=0,k;
	if(!hasUpperCaps(str) && hasSmallCaps(str))
	{
		while(i++<n)
		{
			k=trng32_ach()%n;
			if(str[k]>=97 && str[k]<=122)
			{
				printf("There is no upper case letter. So, we are converting the %c into upper case\n",str[k]);
				str[k]=str[k]-32;
				return;
			}
		}
	}
	if( !hasSmallCaps(str))
	{
		while(i++<n)
		{
			k=trng32_ach()%n;
			if(str[k]>=65 && str[k]<=97)
			{
				printf("There is no lower case letter. So, we are converting the %c into lower case\n",str[k]);
				str[k]=str[k]+32;
				return;
			}
		}
	}
}


int genPassHard(char fname[], char sname[], int dd, int mm, int yy, int pin, char pass[])
{
	int nflag=0,dflag=0;
	char *ptr=NULL,buff[100],ch;
	int n=trng32_ach();
	if(!check(fname))
		return 0;
	if(!check(sname))
		return 0;
	if(n&1)
	{
		copy(pass,fname);
		if(!replaceCharBySymb(pass))
		{
			ch=selects(pass);
			sprintf(buff,"%c",ch);
			printf("There is no symbols in the password. So, we insert %c between two words\n",ch);
			concates(pass,buff);
		}
	}
	else
	{
		copy(pass,sname);
		if(!replaceCharBySymb(pass))
		{
			ch=selects(pass);
			sprintf(buff,"%c",ch);
			printf("There is no symbols in the password. So, we insert %c between two words\n",ch);
			concates(pass,buff);
		}
	}
	n=trng32_ach()%5;
	if(n==0)
	{
		ptr=num2symb(pin);
		dflag=0;
	}
	if(n==1)
	{
		ptr=num2symb(dd);
		dflag=1;
	}
	else
	if(n==2)
	{
		ptr=num2symb(mm);
		dflag=2;
	}
	else
	if(n==3)
	{
		ptr=num2symb(yy);
		dflag=3;
	}
	else
	{
		ptr=num2symb(pin);
		dflag=0;
	}
	if(dflag==0||dflag==5)
	{
		if(dflag==1)
		{
			n=trng32_ach();
			if(n&1)
			{
				sprintf(buff,"%d",mm);
				concates(pass,buff);
			}
			else
			{
				sprintf(buff,"%d",yy);
				concates(pass,buff);
			}
		}
		else
		if(dflag==2)
		{	
			n=trng32_ach();
			if(n&1)
			{
				sprintf(buff,"%d",dd);
				concates(pass,buff);
			}
			else
			{
				sprintf(buff,"%d",yy);
				concates(pass,buff);
			}
		}
		else
		{
			n=trng32_ach();
			if(n&1)
			{
				sprintf(buff,"%d",dd);
				concates(pass,buff);
			}
			else
			{
				sprintf(buff,"%d",yy);
				concates(pass,buff);
			}
		}
	}		
	else
	{
		sprintf(buff,"%d",pin);
		concates(pass,buff);
	}
	concates(pass,ptr);
	update(pass);
	return 1;
}

int genPassMedium(char fname[], char sname[], int dd, int mm, int yy, int pin, char pass[])
{
	int nflag=0,dflag=0;
	char *ptr=NULL,buff[100],ch;
	int n=trng32_ach(),t;
	if(!check(fname))
		return 0;
	if(!check(sname))
		return 0;
	if(n&1)
	{
		copy(pass,fname);
		if(!replaceCharBySymb(pass))
		{
			ch=selects(pass);
			sprintf(buff,"%c",ch);
			printf("There is no symbols in the password. So, we insert %c between two words\n",ch);
			concates(pass,buff);
		}
	}
	else
	{
		copy(pass,sname);
		if(!replaceCharBySymb(pass))
		{
			ch=selects(pass);
			sprintf(buff,"%c",ch);
			printf("There is no symbols in the password. So, we insert %c between two words\n",ch);
			concates(pass,buff);
		}
	}
	n=trng32_ach()%5;
	t=trng32_ach()&1;
	if(n==0)
	{
		if(t==0)
		{
			sprintf(buff,"%d",yy);
			concates(pass,buff);
			ptr=num2symb(yy);
			concates(pass,ptr);
		}
		else
		{
			ptr=num2symb(yy);
			concates(pass,ptr);
			sprintf(buff,"%d",yy);
			concates(pass,buff);
		}
	}
	else
	if(n==1)
	{
		if(t==0)
		{
			sprintf(buff,"%d",pin);
			concates(pass,buff);
			ptr=num2symb(pin);
			concates(pass,ptr);
		}
		else
		{
			ptr=num2symb(dd);
			concates(pass,ptr);
			sprintf(buff,"%d",dd);
			concates(pass,buff);
		}
	}
	else
	if(n==2)
	{
		if(t==0)
		{
			sprintf(buff,"%d",mm);
			concates(pass,buff);
			ptr=num2symb(mm);
			concates(pass,ptr);
		}
		else
		{
			ptr=num2symb(mm);
			concates(pass,ptr);
			sprintf(buff,"%d",mm);
			concates(pass,buff);
		}
	}
	else
	if(n==3)
	{
		if(t==0)
		{
			sprintf(buff,"%d",dd);
			concates(pass,buff);
			ptr=num2symb(dd);
			concates(pass,ptr);
		}
		else
		{
			ptr=num2symb(dd);
			concates(pass,ptr);
			sprintf(buff,"%d",dd);
			concates(pass,buff);
		}
	}
	else
	{
		if(t==0)
		{
			sprintf(buff,"%d",pin);
			concates(pass,buff);
			ptr=num2symb(pin);
			concates(pass,ptr);
		}
		else
		{
			ptr=num2symb(dd);
			concates(pass,ptr);
			sprintf(buff,"%d",dd);
			concates(pass,buff);
		}
	}
	return 1;
}


int genPassEasy(char fname[], char sname[], int dd, int mm, int yy, int pin, char pass[])
{
	int nflag=0,dflag=0;
	char *ptr=NULL,buff[100],ch;
	int n=trng32_ach(),t;
	if(!check(fname))
		return 0;
	if(!check(sname))
		return 0;
	if(n&1)
	{
		copy(pass,fname);
		if(!replaceCharBySymb(pass))
		{
			ch=selects(pass);
			sprintf(buff,"%c",ch);
			printf("There is no symbols in the password. So, we insert %c between two words\n",ch);
			concates(pass,buff);
		}
	}
	else
	{
		copy(pass,sname);
		if(!replaceCharBySymb(pass))
		{
			ch=selects(pass);
			sprintf(buff,"%c",ch);
			printf("There is no symbols in the password. So, we insert %c between two words\n",ch);
			concates(pass,buff);
		}
	}
	n=trng32_ach()%5;
	t=trng32_ach()&1;
	if(n==0)
	{
		sprintf(buff,"%d",yy);
		concates(pass,buff);
	}
	else
	if(n==1)
	{
		sprintf(buff,"%d",pin);
		concates(pass,buff);
	}
	else
	if(n==2)
	{
		sprintf(buff,"%d",mm);
		concates(pass,buff);
	}
	else
	if(n==3)
	{
		sprintf(buff,"%d",dd);
		concates(pass,buff);
	}
	else
	{
		sprintf(buff,"%d",pin);
		concates(pass,buff);
	}
	return 1;
}
