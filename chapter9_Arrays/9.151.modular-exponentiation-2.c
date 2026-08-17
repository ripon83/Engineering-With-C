/*
 * Program: Modular Exponentiation 2
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

% % #include<stdio.h>
% % #include<math.h>
% % #include<string.h>
% % //Find GCD
% % int GCD(int x, int y)
% % {
% % 	int min,i,z;
% % 	min=(x<y)?x:y;
% % 	for(i=min;i>=1;i--)
% % 	{
% % 		if(x%i==0&&y%i==0)
% % 		{
% % 			z=i;
% % 			break;
% % 		}
% % 	}
% % 	return z;
% % }
% % //Find and choose 'e' public key
% % int find_e(int fnphi)
% % {
% % 	int gcd,e;
% % 	int ch;
% % 	for(int i=2;i<fnphi;i++)
% % 	{
% % 		if(GCD(i,fnphi)==1)
% % 		{
% % 			e=i;
% % 			printf("\ne=%d",e);
% % 			printf("\nDo you want to change e (1/0):");
% % 			scanf("%d",&ch);
% % 			if(ch==1)
% % 			{
% % 				continue;
% % 			}
% % 			else
% % 			{
% % 				break;
% % 			}
			
% % 		}
% % 	}
% % 	return e;
% % }
% % //Find 'd' secret key
% % int find_d(int fne,int fnphi)
% % {
% % 	int d;
% % 	for(int i=0;i<fnphi;i++)
% % 	{
% % 		if(i*fne%fnphi==1)
% % 		{
% % 			d=i;
% % 		}
% % 	}
% % 	return d;
% % }
% % //Modular exponential for computing expression of the form a^b % c
% % int modexp(int msg,int mod,int exp)
% % {
% % 	int power;
% % 	power=msg%mod;
% % 	int x=1;
% % 	while(exp!=0)
% % 	{
% % 		if(exp%2==1)
% % 		{
% % 			x=(x*power)%mod;
% % 		}
% % 		power=(power*power)%mod;
% % 		exp=exp/2;
% % 	}
% % 	return x;
% % }
% % int main()
% % {
% % 	int p=13,q=11,e,d,len,i;
% % 	int n=p*q;
% % 	int phi=(p-1)*(q-1);
% % 	char pt[50];
% % 	int ct[50];
% % 	int val;
% % 	int ascii[50];
% % 	printf("\nEnter plaintext(Max 50 char):");
% % 	fgets(pt,sizeof(pt),stdin);
% % 	printf("n=%d and phi=%d",n,phi);
% % 	e=find_e(phi);
% % 	printf("\nPublic key e=%d",e);
% % 	d=find_d(e,phi);
% % 	printf("\nPrivate key d=%d\n",d);
% % 	len=strlen(pt);
% % 	for(i=0;i<len-1;i++)
% % 	{
% % 		ascii[i]=(int)pt[i];  // Store a value in an array element
% % 	}
% % 	for(i=0;i<len-1;i++)
% % 	{
% % 		ct[i]=modexp(ascii[i],n,e);  // Store a value in an array element
% % 	}
% % 	printf("\nCiphertext in char form:");
% % 	for(i=0;i<len-1;i++)
% % 	{
% % 		printf("%c",ct[i]);
% % 	}
% % 	printf("\nDeciphertext:");
% % 	for(i=0;i<len-1;i++)
% % 	{
% % 		ascii[i]=modexp(ct[i],n,d);  // Store a value in an array element
% % 		printf("%c",ascii[i]);
% % 	}
% % 	return 0;
% % }
% %
