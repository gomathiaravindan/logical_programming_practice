#include<stdio.h>
int main()
{
	int n,sum=0,i;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	sum==n?printf("Perfect number"):printf("Not a perfect number");
}
