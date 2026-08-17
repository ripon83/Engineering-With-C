/*
 * Program: Rsa Algorithm
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

% % #include<stdio.h>
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
% % int main()
% % {
% % 	int p=13,q=11,e;
% % 	int phi=(p-1)*(q-1);
% % 	e=find_e(phi);
% % 	printf("Public key e=%d",e);
% % 	return 0;
% % }
% %
