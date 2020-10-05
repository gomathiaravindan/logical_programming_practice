#include<stdio.h>
int main()
{
	int n,rem,sum=0,i;
	printf("Enter a decimal value:");
	scanf("%d",&n);
	printf("The decimal value is:");
	for(i=32;i>=0;i--)
	{
		rem=n>>i;
		(rem&1)?printf("1"):printf("0");
	}

}
