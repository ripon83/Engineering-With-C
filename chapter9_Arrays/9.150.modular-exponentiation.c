/*
 * Program: Modular Exponentiation
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

% % #include<stdio.h>
% % int main()
% % {
% % 	int a,exp,m,power,x;
% % 	printf("Enter a, exp, m:");
% % 	scanf("%d%d%d",&a,&exp,&m);
% % 	power=a%m;
% % 	x=1;
% % 	while(exp!=0)
% % 	{
% % 		if(exp%2==1)
% % 		{
% % 			x=(x*power)%m;
% % 		}
% % 		power=(power*power)%m;
% % 		exp=exp/2;
% % 	}
% % 	printf("\nx=%d",x);
% % 	return 0;
% % }
% %
