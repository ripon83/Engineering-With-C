
char digitToSymb(int n)
{
	char ns[]={')','!','@','#','$','%','^','&','*','('};
	if(n>9 && n<0)
		return '\0';
	return ns[n];
}

char * symbols(char ch)
{
	static char cs[27][5]={"@","\0","(","\0","\0","\0","\0","|-|","!","\0","|<","|_","|\\/|","|\\|","\0","\0","\0","\0","$","\0","\0","\\/","\\/\\/","\0","\0","\0"};

	if(ch=='a' || ch=='A' || ch=='C' || ch=='c' ||ch=='H' || ch=='h' || ch=='i' ||ch=='I'|| ch=='K' || ch=='k' || ch=='l' || ch=='L' || ch=='M'|| ch=='m'|| ch=='n'|| ch=='N'|| ch=='V'|| ch=='v'|| ch=='W'|| ch=='w')
	{	
		if(ch<97)
			return cs[ch-65];
		return cs[ch-97];
	}
	return NULL;	
}

int length(char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
}
void swap(char *x, char *y)
{
	char tmp=*x;
	*x=*y;
	*y=tmp;
}

void concates(char s1[], char s2[])
{
	int i,j,n;
	j=length(s1);
	for(i=0;s2[i]!='\0';i++)
		s1[j++]=s2[i];
	s1[j]='\0';
}

void copy(char des[], char src[])
{
	int i;
	for(i=0;src[i]!='\0';i++)
		des[i]=src[i];
	des[i]='\0';
}

void reverse(char str[])
{
	int i,j;
	int n=length(str);
	for(i=0,j=n-1;i<j;i++,j--)
		swap(&str[i],&str[j]);
}


void insertCharAt(char str[], int l, char c, int pos)
{
	int i;
	for(i=l;i>pos;i--)
		str[i]=str[i-1];
	str[i]=c;
}

void shift(char *str,int i, int l)
{
	int j;
	for(j=i;j<l;j++)
		str[j]=str[j+1];
	str[j]='\0';
}

int vowel(char ch)
{
	if(ch=='A'||ch=='a'||ch=='e'||ch=='E'||ch=='I'||ch=='i'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
		return 1;
	return 0;
}

int contains(char str[], char ch)
{
	for(int i=0;str[i]!='\0';i++)
		if(str[i]==ch)
			return 1;
	return 0;
}

int hasUpperCaps(char str[])
{
	int counter=0;
	for(int i=0; str[i]!='\0'; i++)
		if(str[i]>=65 && str[i]<=90)
			counter++;
	return counter;
}	

int hasSmallCaps(char str[])
{
	int counter=0;
	for(int i=0; str[i]!='\0'; i++)
		if(str[i]>=97 && str[i]<=122)
			counter++;
	return counter;
}	

int compare(char str1[],char str2[])
 {
    int i=0;
    while(str1[i]!='\0' && str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
            return str1[i]-str2[i];
        i++;
    }
    return str1[i]-str2[i];
 }

int check(char str[])
{
	int count=0;
	for(int i=0; str[i]!='\0'; i++)
		if((str[i]>=65 && str[i]<=122) || (str[i]>=97 && str[i]<=122))
			count++;
	if(count<3)
	{	
		printf("The name must conatin at least three alphabet! No password generation.");
		return 0;
	}
	return 1;
}