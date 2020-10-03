#include<stdio.h>
int main()
{
	int n,sq,sum=0;
	printf("Enter a number:");
	scanf("%d",&n);
	sq=n*n;
	while(sq!=0)
	{
		sum+=sq%10;
		sq/=10;
	}
	sum==n?printf("Neon number"):printf("Not a neon number");
}
