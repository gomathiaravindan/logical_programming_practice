#include<stdio.h>
int main()
{
	int n,rev,sum=0,t;
	printf("Enter a number:");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		rev=n%10;
		sum=sum*10+rev;
		n/=10;
	}
	t==sum?printf("Palindrome number"):printf("Not a palindrome number");
	
}
