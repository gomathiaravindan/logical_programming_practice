#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the limit:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if((i&1)!=1)
		{
			sum+=i;
		}
	}
	printf("The sum of even numbers is: %d",sum);
}
